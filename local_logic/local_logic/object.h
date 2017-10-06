#ifndef OBJECT_H
#define OBJECT_H

typedef int TId;

//������ID����Ļ���
template<typename T> 
class Object
{
public:
	TId ID() const;
protected:
	Object();
	Object(TId id);
	virtual ~Object() = default;
private:
	static int s_count;
	TId m_id;
};

template<typename T>
Object<T>::ID() const
{
	return m_id;
}

//Ĭ�Ϲ��캯��������count
template<typename T>
Object<T>::Object()
{
	m_id = count++;
}

//����ʱ�Ĺ��캯����������count
template<typename T>
Object<T>::Object(TId id):m_id(id){}

template<typename T>
Object<T>::Object(TId id) : m_id(id) {}

#endif  //OBJECT_H