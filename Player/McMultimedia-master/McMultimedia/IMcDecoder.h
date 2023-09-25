#ifndef _I_MC_DECODER_H_
#define _I_MC_DECODER_H_

struct AVStream;
struct AVPacket;

class IMcDecoder {
public:
	virtual ~IMcDecoder() = default;

	/*************************************************
	 <��������>		setFlushStr
	 <��    ��>		����ˢ���ַ�����������������ӵ�и��ַ�������Դ��ʱˢ�½�������
	 <����˵��>		str	ˢ���õ��ַ���
	 <����ֵ>
	 <����˵��>		���������������ˢ���ַ�����������������ӵ�и��ַ�������Դ��ʱˢ�½�������
	 <��    ��>		mrcao
	 <ʱ    ��>		2019/5/6
	**************************************************/
	virtual void setFlushStr(const char *str) noexcept = 0;
	/*************************************************
	 <��������>		init
	 <��    ��>		��ʼ����������ͨ�������ý������ʼ����Ӧ�Ľ�������
	 <����˵��>		stream �����ý����
	 <����ֵ>		��ʼ���ɹ�����true�����򷵻�false
	 <����˵��>		�������������ʼ����������ͨ�������ý������ʼ����Ӧ�Ľ�������
	 <��    ��>		mrcao
	 <ʱ    ��>		2019/5/6
	**************************************************/
	virtual bool init(AVStream *stream) noexcept = 0;
	/*************************************************
	 <��������>		addPacket
	 <��    ��>		������Դ��������ȡ������Դ�����ӽ��������У�ӵ��֮�����
	 <����˵��>		packet ��Դ��
	 <����ֵ>
	 <����˵��>		�����������������Դ��������ȡ������Դ�����ӽ��������У�ӵ��֮�����
	 <��    ��>		mrcao
	 <ʱ    ��>		2019/5/6
	**************************************************/
	virtual void addPacket(AVPacket *packet) noexcept = 0;
	/*************************************************
	 <��������>		getPacketNum
	 <��    ��>		��ȡ��δ�������Դ������
	 <����˵��>		
	 <����ֵ>		ʣ����Դ������
	 <����˵��>		�������������ȡ��δ�������Դ������
	 <��    ��>		mrcao
	 <ʱ    ��>		2019/5/6
	**************************************************/
	virtual int getPacketNum() noexcept = 0;
	/*************************************************
	 <��������>		clearPacket
	 <��    ��>		���ʣ����Դ��
	 <����˵��>		
	 <����ֵ>
	 <����˵��>		��������������ʣ����Դ��
	 <��    ��>		mrcao
	 <ʱ    ��>		2019/5/6
	**************************************************/
	virtual void clearPacket() noexcept = 0;
};

#endif // ! _I_MC_DECODER_H_
