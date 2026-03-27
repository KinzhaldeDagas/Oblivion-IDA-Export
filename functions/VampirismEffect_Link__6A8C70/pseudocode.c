int __thiscall VampirismEffect_Link(float *this, void *a2)
{
  _DWORD **v3; // eax
  _DWORD **v4; // esi
  _DWORD *v5; // ecx
  int v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]

  ActiveEffect_Base_Link(this, (int)a2, v7, v8);
  v3 = (_DWORD **)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&Actor `RTTI Type Descriptor',
                    &Character `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3 )
    return VampirismEffect_Link_::Done(a2);
  v5 = v3[0x16];
  if ( !v5 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 0x320))(v5) )
    return VampirismEffect_Link_::Done(a2);
  if ( ((int (__thiscall *)(_DWORD **))(*v4)[0x55])(v4) )
    sub_60E2E0(v4, *(this + 6));
  (*(void (__thiscall **)(_DWORD *))(*v4[0x16] + 0x5C))(v4[0x16]);
  g_bUpdatePlayerModel = 1;
  (*(void (__thiscall **)(_DWORD *, void *))(*v4[0x16] + 0x318))(v4[0x16], a2);
  g_bUpdatePlayerModel = 0;
  return VampirismEffect_Link_::Done(a2);
}
