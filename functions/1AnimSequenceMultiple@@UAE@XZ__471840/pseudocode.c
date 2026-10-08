void __thiscall AnimSequenceMultiple::~AnimSequenceMultiple(AnimSequenceMultiple *this)
{
  AnimSequenceMultiple *v1; // esi
  int v2; // eax
  _DWORD *v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // esi
  char *m_data; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  const char *v8; // [esp-8h] [ebp-34h]
  BSStringT v10; // [esp+18h] [ebp-14h] BYREF
  int v11; // [esp+28h] [ebp-4h]

  v1 = this; /*0x471867*/
  *(_DWORD *)this = &AnimSequenceMultiple::`vftable'; /*0x47186d*/
  v2 = *((_DWORD *)this + 1); /*0x471873*/
  v11 = 0; /*0x47187a*/
  if ( v2 ) /*0x47187e*/
  {
    v3 = *(_DWORD **)(v2 + 4); /*0x471884*/
    if ( v3 ) /*0x471889*/
    {
      v4 = InterlockedDecrement; /*0x47188b*/
      do /*0x4718fa*/
      {
        v5 = v3[2]; /*0x471891*/
        v10.m_data = 0; /*0x471894*/
        v10.m_dataLen = 0; /*0x471898*/
        v10.m_bufLen = 0; /*0x47189d*/
        v8 = *(const char **)(v5 + 8); /*0x4718a6*/
        LOBYTE(v11) = 1; /*0x4718ab*/
        BSStringT_Set(&v10, v8, 0); /*0x4718b0*/
        if ( !v4((volatile LONG *)(v5 + 4)) ) /*0x4718b9*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4718c7*/
        m_data = v10.m_data; /*0x4718c9*/
        ModelLoader_ReleaseModelPath(MEMORY[0xB33A1C], (int)v10.m_data, 1); /*0x4718d6*/
        v3 = (_DWORD *)*v3; /*0x4718db*/
        LOBYTE(v11) = 0; /*0x4718de*/
        FormHeapFree((unsigned int)m_data); /*0x4718e2*/
        v10.m_data = 0; /*0x4718ec*/
        v10.m_bufLen = 0; /*0x4718f0*/
        v10.m_dataLen = 0; /*0x4718f5*/
      }
      while ( v3 ); /*0x4718fa*/
      v1 = this; /*0x4718fc*/
    }
    v7 = *((void (__thiscall ****)(_DWORD, int))v1 + 1); /*0x471900*/
    if ( v7 ) /*0x471905*/
      (**v7)(v7, 1); /*0x47190d*/
  }
  *(_DWORD *)v1 = &AnimSequenceBase::`vftable'; /*0x47190f*/
}
