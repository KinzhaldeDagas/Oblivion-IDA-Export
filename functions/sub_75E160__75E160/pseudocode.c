_DWORD *__thiscall sub_75E160(_DWORD *this, char a2)
{
  char v2; // bl
  _DWORD *result; // eax
  int v5; // ebp
  int v6; // ecx
  int v7; // ebp
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // edi
  _DWORD *v11; // [esp+8h] [ebp-4h]

  v2 = a2; /*0x75e162*/
  if ( (a2 & 2) != 0 ) /*0x75e16c*/
  {
    result = this + 0xFFFFFFFF; /*0x75e172*/
    v5 = *(this + 0xFFFFFFFF); /*0x75e176*/
    v6 = 5 * v5; /*0x75e178*/
    v7 = v5 - 1; /*0x75e17c*/
    v11 = this + 0xFFFFFFFF; /*0x75e17f*/
    v8 = this + v6; /*0x75e183*/
    if ( v7 >= 0 ) /*0x75e186*/
    {
      do /*0x75e1f2*/
      {
        v8 += 0xFFFFFFFB; /*0x75e190*/
        *v8 = &NiPSysUpdateTask::`vftable'; /*0x75e193*/
        v9 = v8[3]; /*0x75e199*/
        if ( v9 ) /*0x75e19e*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x75e1a4*/
            (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x75e1ba*/
          v8[3] = 0; /*0x75e1bc*/
        }
        v10 = v8[3]; /*0x75e1bf*/
        if ( v10 ) /*0x75e1c4*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x75e1ca*/
            (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x75e1e0*/
        }
        *v8 = &NiTask::`vftable'; /*0x75e1e4*/
        NiRefObject_destr(v8); /*0x75e1ea*/
        --v7; /*0x75e1ef*/
      }
      while ( v7 >= 0 ); /*0x75e1f2*/
      result = v11; /*0x75e1f4*/
      v2 = a2; /*0x75e1f8*/
    }
    if ( (v2 & 1) != 0 ) /*0x75e201*/
    {
      FormHeapFree((unsigned int)result); /*0x75e204*/
      return v11; /*0x75e209*/
    }
  }
  else
  {
    sub_75DF80(this); /*0x75e216*/
    if ( (a2 & 1) != 0 ) /*0x75e21e*/
      FormHeapFree((unsigned int)this); /*0x75e221*/
    return this; /*0x75e229*/
  }
  return result; /*0x75e210*/
}
