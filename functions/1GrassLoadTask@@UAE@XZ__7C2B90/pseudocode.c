void __thiscall GrassLoadTask::~GrassLoadTask(GrassLoadTask *this)
{
  BSStream::~BSStream((GrassLoadTask *)((char *)this + 0x28));
  LipTask::~LipTask(this);
}
