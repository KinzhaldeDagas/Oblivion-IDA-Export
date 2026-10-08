void __thiscall sub_642E50(unsigned int **this, char arg0)
{
  unsigned int *v3; // esi
  unsigned int v4; // edx
  bool v5; // zf
  _DWORD *v6; // esi
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // ebp
  int v10; // edi
  ThreadSpecificInterfaceManager *v11; // eax
  ThreadSpecificInterfaceManager *v12; // eax
  unsigned int v13; // [esp+14h] [ebp-14h]
  unsigned int a2; // [esp+18h] [ebp-10h]

  v3 = *(this + 5); /*0x642e79*/
  if ( v3 ) /*0x642e80*/
  {
    a2 = *v3; /*0x642e8a*/
    sub_43C4C0(*(this + 5)); /*0x642e8e*/
    FormHeapFree((unsigned int)v3); /*0x642e94*/
    v4 = 0; /*0x642e99*/
    v5 = *(this + 2) == 0; /*0x642e9e*/
    *(this + 5) = 0; /*0x642ea1*/
    *(this + 6) = 0; /*0x642ea4*/
    v13 = 0; /*0x642ea7*/
    if ( !v5 ) /*0x642eab*/
    {
      do /*0x642f55*/
      {
        v6 = (_DWORD *)((*(this + 3))[v4] & 0xFFFFFFFE); /*0x642ec3*/
        (*(this + 3))[v4] = 0; /*0x642eca*/
        if ( v6 ) /*0x642ed0*/
        {
          do /*0x642f45*/
          {
            v7 = v6[2]; /*0x642ed2*/
            v6[2] = 0; /*0x642ed5*/
            v8 = v6[1]; /*0x642edc*/
            v9 = v7 & 0xFFFFFFFE; /*0x642edf*/
            if ( v8 ) /*0x642ee4*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v8 + 8)) ) /*0x642eea*/
                (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x642f00*/
              v6[1] = 0; /*0x642f02*/
            }
            ((void (__thiscall *)(unsigned int **, _DWORD))(*this)[8])(this, *v6); /*0x642f13*/
            v10 = v6[1]; /*0x642f15*/
            if ( v10 ) /*0x642f1a*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v10 + 8)) ) /*0x642f20*/
                (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x642f36*/
            }
            FormHeapFree((unsigned int)v6); /*0x642f39*/
            v6 = (_DWORD *)v9; /*0x642f43*/
          }
          while ( v9 ); /*0x642f45*/
          v4 = v13; /*0x642f47*/
        }
        v13 = ++v4; /*0x642f51*/
      }
      while ( v4 < (unsigned int)*(this + 2) ); /*0x642f55*/
    }
    if ( !arg0 ) /*0x642f60*/
    {
      v11 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x642f64*/
      if ( v11 ) /*0x642f7a*/
        v12 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v11, a2); /*0x642f83*/
      else
        v12 = 0; /*0x642f8a*/
      *(this + 5) = &v12->maxThread; /*0x642f8c*/
    }
  }
}
