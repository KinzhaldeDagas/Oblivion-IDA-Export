int __thiscall sub_4424D0(_DWORD *this, float arg0)
{
  _BYTE *v4; // edi
  double v5; // st6
  double v6; // st7
  int v7; // eax
  double v8; // st7
  float a2; // [esp+0h] [ebp-18h]
  float v11; // [esp+4h] [ebp-14h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+14h] [ebp-4h]
  float v15; // [esp+1Ch] [ebp+4h]

  v4 = (_BYTE *)*(this + 0xD);
  if ( v4 )
  {
    v5 = 0.0;
    sub_6FACA0(0.0, 0.0);
    v6 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v7 = *(this + 0x17);
    v14 = *(float *)(v7 + 0xC0);
    v13 = *(float *)(v7 + 0xC4);
    v5 = v14;
    sub_6FACA0(v14, v13);
    v11 = v13;
    v6 = v14;
  }
  a2 = v6;
  sub_8984A0(a2, v11);
  flt_B33A30 = flt_B33A30 + arg0;
  v12 = flt_B33A30;
  if ( v4 )
    sub_4D4970(v4, v12);
  else
    sub_4823D0((_DWORD *)*(this + 2), v12);
  if ( !TES->waterNodeData )
    sub_43F560(TES);
  if ( InterfaceManager::IsOpenedMenuDialogue() )
    v8 = flt_B06530 * flt_B33E9C;
  else
    v8 = arg0;
  v15 = v8;
  sub_542F20((Sky *)*(this + 0x17), v5, v15, v15);
  NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 5), flt_B33A30, 1);
  return sub_676E40(&ActorProcessManager_ptr);
}
