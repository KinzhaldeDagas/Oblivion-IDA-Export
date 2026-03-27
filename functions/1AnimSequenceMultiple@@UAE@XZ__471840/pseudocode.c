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

  v1 = this;
  *(_DWORD *)this = &AnimSequenceMultiple::`vftable';
  v2 = *((_DWORD *)this + 1);
  v11 = 0;
  if ( v2 )
  {
    v3 = *(_DWORD **)(v2 + 4);
    if ( v3 )
    {
      v4 = InterlockedDecrement;
      do
      {
        v5 = v3[2];
        v10.m_data = 0;
        v10.m_dataLen = 0;
        v10.m_bufLen = 0;
        v8 = *(const char **)(v5 + 8);
        LOBYTE(v11) = 1;
        BSStringT_Set(&v10, v8, 0);
        if ( !v4((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        m_data = v10.m_data;
        sub_438540(ModelLoaderPtr, (int)v10.m_data, 1);
        v3 = (_DWORD *)*v3;
        LOBYTE(v11) = 0;
        FormHeapFree((unsigned int)m_data);
        v10.m_data = 0;
        v10.m_bufLen = 0;
        v10.m_dataLen = 0;
      }
      while ( v3 );
      v1 = this;
    }
    v7 = *((void (__thiscall ****)(_DWORD, int))v1 + 1);
    if ( v7 )
      (**v7)(v7, 1);
  }
  *(_DWORD *)v1 = &AnimSequenceBase::`vftable';
}
