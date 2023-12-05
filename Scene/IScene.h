#pragma once
//�V�[������񋓌^(Enum)�Œ�`
enum SCENE { TITLE, STAGE, CLEAR };

// �V�[�����ł̏������s�����N���X
class IScene{
protected:
	// �V�[���ԍ����Ǘ�����ϐ�
	static int sceneNo;
public:
	// �p����Ŏ��������֐�
	/// ���ۃN���X�Ȃ̂ŏ������z�֐��Ƃ���
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	// ���z�f�X�g���N�^��p�ӂ��Ȃ��ƌx�������
	virtual ~IScene();

	// �V�[���ԍ��̃Q�b�^�[
	int GetSceneNo();

	
};

