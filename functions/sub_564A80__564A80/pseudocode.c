NiObject *__thiscall sub_564A80(void *this)
{
  NiObject *v1; // edi
  int v2; // eax
  int v3; // esi

  v1 = 0;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA4))(this);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0xA8);
    if ( v3 )
    {
      InterlockedIncrement((volatile LONG *)(v3 + 4));
      v1 = NiRTTI_Cast((BSStringT *)dword_BA7F78, *(NiObject **)(v3 + 0x10));
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
  return v1;
}
