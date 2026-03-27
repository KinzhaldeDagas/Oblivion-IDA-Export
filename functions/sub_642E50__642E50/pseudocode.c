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

  v3 = *(this + 5);
  if ( v3 )
  {
    a2 = *v3;
    sub_43C4C0(*(this + 5));
    FormHeapFree((unsigned int)v3);
    v4 = 0;
    v5 = *(this + 2) == 0;
    *(this + 5) = 0;
    *(this + 6) = 0;
    v13 = 0;
    if ( !v5 )
    {
      do
      {
        v6 = (_DWORD *)((*(this + 3))[v4] & 0xFFFFFFFE);
        (*(this + 3))[v4] = 0;
        if ( v6 )
        {
          do
          {
            v7 = v6[2];
            v6[2] = 0;
            v8 = v6[1];
            v9 = v7 & 0xFFFFFFFE;
            if ( v8 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v8 + 8)) )
                (**(void (__thiscall ***)(int, int))v8)(v8, 1);
              v6[1] = 0;
            }
            ((void (__thiscall *)(unsigned int **, _DWORD))(*this)[8])(this, *v6);
            v10 = v6[1];
            if ( v10 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v10 + 8)) )
                (**(void (__thiscall ***)(int, int))v10)(v10, 1);
            }
            FormHeapFree((unsigned int)v6);
            v6 = (_DWORD *)v9;
          }
          while ( v9 );
          v4 = v13;
        }
        v13 = ++v4;
      }
      while ( v4 < (unsigned int)*(this + 2) );
    }
    if ( !arg0 )
    {
      v11 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u);
      if ( v11 )
        v12 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v11, a2);
      else
        v12 = 0;
      *(this + 5) = &v12->maxThread;
    }
  }
}
