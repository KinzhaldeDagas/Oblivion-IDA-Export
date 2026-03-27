void __thiscall BSShaderPPLightingProperty::~BSShaderPPLightingProperty(BSShaderPPLightingProperty *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // edi
  int v10; // edi
  int v11; // ebp
  _DWORD *v12; // edi
  int *v13; // eax
  unsigned int v14; // edi
  int *v15; // eax
  unsigned int v16; // edi
  int *v17; // eax
  unsigned int v18; // edi
  int v19; // edi
  LONG (__stdcall *v20)(volatile LONG *); // ebx
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // [esp+14h] [ebp-14h]

  *(_DWORD *)this = &BSShaderPPLightingProperty::`vftable';
  if ( *((_DWORD *)this + 0x2F) )
  {
    v2 = 0;
    v24 = 0;
    if ( *((_WORD *)this + 0x5C) )
    {
      do
      {
        v3 = *((_DWORD *)this + 0x2F);
        v4 = 4 * v2;
        v5 = *(_DWORD *)(v3 + 4 * v2);
        v6 = (_DWORD *)(4 * v2 + v3);
        if ( v5 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
            (**(void (__thiscall ***)(int, int))v5)(v5, 1);
          *v6 = 0;
        }
        v7 = *((_DWORD *)this + 0x30);
        v8 = *(_DWORD *)(v7 + v4);
        v9 = (_DWORD *)(v4 + v7);
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
            (**(void (__thiscall ***)(int, int))v8)(v8, 1);
          *v9 = 0;
        }
        v10 = *((_DWORD *)this + 0x31);
        v11 = *(_DWORD *)(v10 + v4);
        v12 = (_DWORD *)(v4 + v10);
        if ( v11 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
            (**(void (__thiscall ***)(int, int))v11)(v11, 1);
          *v12 = 0;
        }
        v2 = ++v24;
      }
      while ( v24 < *((unsigned __int16 *)this + 0x5C) );
    }
    v13 = *((int **)this + 0x2F);
    if ( v13 )
    {
      v14 = (unsigned int)(v13 + 0xFFFFFFFF);
      _LN21(v13, 4u, v13[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v14);
    }
    v15 = *((int **)this + 0x30);
    if ( v15 )
    {
      v16 = (unsigned int)(v15 + 0xFFFFFFFF);
      _LN21(v15, 4u, v15[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v16);
    }
    v17 = *((int **)this + 0x31);
    if ( v17 )
    {
      v18 = (unsigned int)(v17 + 0xFFFFFFFF);
      _LN21(v17, 4u, v17[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
      FormHeapFree(v18);
    }
    FormHeapFree(*((_DWORD *)this + 0x34));
    FormHeapFree(*((_DWORD *)this + 0x32));
  }
  v19 = *((_DWORD *)this + 0x38);
  v20 = InterlockedDecrement;
  if ( v19 )
  {
    if ( !v20((volatile LONG *)(v19 + 4)) )
      (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    *((_DWORD *)this + 0x38) = 0;
  }
  *((_DWORD *)this + 0x36) = 0;
  *((float *)this + 0x3A) = 0.0;
  v21 = *((_DWORD *)this + 0x35);
  if ( v21 )
  {
    if ( !v20((volatile LONG *)(v21 + 4)) )
      (**(void (__thiscall ***)(int, int))v21)(v21, 1);
    *((_DWORD *)this + 0x35) = 0;
  }
  v22 = *((_DWORD *)this + 0x38);
  if ( v22 )
  {
    if ( !v20((volatile LONG *)(v22 + 4)) )
      (**(void (__thiscall ***)(int, int))v22)(v22, 1);
  }
  v23 = *((_DWORD *)this + 0x35);
  if ( v23 )
  {
    if ( !v20((volatile LONG *)(v23 + 4)) )
      (**(void (__thiscall ***)(int, int))v23)(v23, 1);
  }
  BSShaderLightingProperty::~BSShaderLightingProperty(this);
}
