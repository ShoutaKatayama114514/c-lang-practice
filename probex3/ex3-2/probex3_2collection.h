#ifndef _COLLECTIONINT_H_
#define _COLLECTION_H_

template <typename T> class Collection {
private:
	//  �z��f�[�^
	T* m_pArray;
	//  �z��̒���
	T m_length;
public:
	//  �R���X�g���N�^
	Collection(T* array, T length);
	//  �f�X�g���N�^
	~Collection();
	//  �ő�l�̎擾
	T getMax();
	//  �ŏ��l�̎擾
	T getMin();
	//  �����̕\��
	void showArray();

};

#endif // _COLLECTIONINT_H_