ThreadSpecificInterfaceManager *__thiscall ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(
        ThreadSpecificInterfaceManager *this,
        unsigned int a2)
{
  int *v3; // eax
  int *v4; // edi

  this->numCurrentThreads = 0; /*0x435ea7*/
  this->maxThread = a2; /*0x435eae*/
  v3 = (int *)FormHeapAlloc((unsigned __int64)a2 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * a2);
  v4 = v3; /*0x435eba*/
  if ( v3 ) /*0x435ecd*/
    sub_401080(v3, 8, a2, (void *(__thiscall *)(void *))DNameNode::DNameNode); /*0x435ed8*/
  else
    v4 = 0; /*0x435edf*/
  this->unk08 = v4; /*0x435ee1*/
  this->tlsStorage = TlsAlloc(); /*0x435eea*/
  return this; /*0x435eef*/
}
