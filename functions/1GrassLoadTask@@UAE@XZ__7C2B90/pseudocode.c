void __thiscall GrassLoadTask::~GrassLoadTask(GrassLoadTask *this)
{
  BSStream::~BSStream((GrassLoadTask *)((char *)this + 0x28)); /*0x7c2bc3*/
  LipTask::~LipTask(this); /*0x7c2bd2*/
}
