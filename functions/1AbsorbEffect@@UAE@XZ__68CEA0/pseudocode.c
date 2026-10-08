void __thiscall AbsorbEffect::~AbsorbEffect(ActiveEffect *this)
{
  NiProperty *v2; // eax
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // eax
  int v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // [esp+4h] [ebp-2Ch]
  _DWORD v14[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+2Ch] [ebp-4h]

  v14[1] = this; /*0x68cec8*/
  this->vtbl = (ActiveEffectVtbl *)&AbsorbEffect::`vftable'; /*0x68cecc*/
  v2 = *((NiProperty **)this + 0x12); /*0x68ced2*/
  v13 = *((_DWORD *)this + 0xF); /*0x68ced9*/
  v15 = 4; /*0x68ceda*/
  sub_7F4420(v13, v2); /*0x68cee2*/
  v3 = *((_DWORD *)this + 0x12); /*0x68cee7*/
  v4 = InterlockedDecrement; /*0x68ceea*/
  if ( v3 ) /*0x68cef5*/
  {
    if ( !v4((volatile LONG *)(v3 + 4)) ) /*0x68cefb*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x68cf0d*/
    *((_DWORD *)this + 0x12) = 0; /*0x68cf0f*/
  }
  v5 = *((_DWORD *)this + 0xF); /*0x68cf16*/
  if ( v5 ) /*0x68cf1b*/
  {
    v6 = *(_DWORD *)(v5 + 0x1C); /*0x68cf1d*/
    if ( v6 ) /*0x68cf22*/
    {
      (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v6 + 0x88))(v6, v14, *((_DWORD *)this + 0xF)); /*0x68cf32*/
      if ( v14[0] ) /*0x68cf3a*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v14[0]; /*0x68cf3c*/
        if ( !v4((volatile LONG *)(v14[0] + 4)) ) /*0x68cf42*/
          (**v7)(v7, 1); /*0x68cf54*/
      }
    }
    v8 = *((_DWORD *)this + 0xF); /*0x68cf56*/
    if ( v8 ) /*0x68cf5b*/
    {
      if ( !v4((volatile LONG *)(v8 + 4)) ) /*0x68cf61*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x68cf73*/
      *((_DWORD *)this + 0xF) = 0; /*0x68cf75*/
    }
  }
  v9 = *((_DWORD *)this + 0x12); /*0x68cf7c*/
  LOBYTE(v15) = 3; /*0x68cf81*/
  if ( v9 ) /*0x68cf86*/
  {
    if ( !v4((volatile LONG *)(v9 + 4)) ) /*0x68cf8c*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x68cf9e*/
  }
  v10 = *((_DWORD *)this + 0x11); /*0x68cfa0*/
  LOBYTE(v15) = 2; /*0x68cfa5*/
  if ( v10 ) /*0x68cfaa*/
  {
    if ( !v4((volatile LONG *)(v10 + 4)) ) /*0x68cfb0*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x68cfc2*/
  }
  v11 = *((_DWORD *)this + 0x10); /*0x68cfc4*/
  LOBYTE(v15) = 1; /*0x68cfc9*/
  if ( v11 ) /*0x68cfce*/
  {
    if ( !v4((volatile LONG *)(v11 + 4)) ) /*0x68cfd4*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x68cfe6*/
  }
  v12 = *((_DWORD *)this + 0xF); /*0x68cfe8*/
  LOBYTE(v15) = 0; /*0x68cfed*/
  if ( v12 ) /*0x68cff2*/
  {
    if ( !v4((volatile LONG *)(v12 + 4)) ) /*0x68cff8*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x68d00a*/
  }
  v15 = 0xFFFFFFFF; /*0x68d00e*/
  ActiveEffect::~ActiveEffect(this); /*0x68d016*/
}
