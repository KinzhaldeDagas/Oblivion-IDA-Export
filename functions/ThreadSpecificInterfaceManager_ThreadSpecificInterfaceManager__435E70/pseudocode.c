ThreadSpecificInterfaceManager *__thiscall ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(
        ThreadSpecificInterfaceManager *this,
        unsigned int a2)
{
  int *v3; // eax
  int *v4; // edi

  this->numCurrentThreads = 0;
  this->maxThread = a2;
  v3 = (int *)FormHeapAlloc((unsigned __int64)a2 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a2);
  v4 = v3;
  if ( v3 )
    sub_401080(v3, 8, a2, (void *(__thiscall *)(void *))DNameNode::DNameNode);
  else
    v4 = 0;
  this->unk08 = v4;
  this->tlsStorage = TlsAlloc();
  return this;
}
