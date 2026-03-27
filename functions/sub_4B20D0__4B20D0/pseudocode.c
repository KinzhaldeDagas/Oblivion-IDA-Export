NiAVObject *__thiscall sub_4B20D0(const char **this, TESObjectREFR *arg0)
{
  NiAVObject *v3; // esi
  TESObjectREFR *a2; // edi
  int (__thiscall *v5)(void *, TESObjectREFR *); // edx
  const char *v6; // eax
  unsigned int v7; // eax
  int (__thiscall *v8)(void *); // edx
  char *v9; // eax
  unsigned int v10; // eax
  float *v11; // eax
  float v13[9]; // [esp+1Ch] [ebp-60h] BYREF
  NiTPointerMap<NiObject *,NiObject *> *v14; // [esp+40h] [ebp-3Ch] BYREF
  void (__thiscall ***v15)(_DWORD, int); // [esp+44h] [ebp-38h]
  float v16; // [esp+50h] [ebp-2Ch]
  float v17; // [esp+54h] [ebp-28h]
  float v18; // [esp+58h] [ebp-24h]
  int v19; // [esp+5Ch] [ebp-20h]
  float v20; // [esp+60h] [ebp-1Ch]
  void *v21; // [esp+64h] [ebp-18h]
  NiAVObject *v22; // [esp+68h] [ebp-14h]
  int v23; // [esp+78h] [ebp-4h]

  v3 = 0;
  v22 = 0;
  v19 = 0;
  a2 = arg0;
  v5 = *((int (__thiscall **)(void *, TESObjectREFR *))*this + 0x44);
  v23 = 0;
  v21 = (void *)v5(this, arg0);
  if ( !v21 )
    return 0;
  if ( !byte_B333F4 )
  {
    byte_B333F4 = 1;
    v6 = (const char *)(*((int (__thiscall **)(const char **))*this + 0x35))(this);
    byte_B333F4 = 0;
    if ( v6 )
      strlen(v6);
  }
  _alloca_();
  LOWORD(v7) = *((_WORD *)this + 0x1C);
  if ( (_WORD)v7 == 0xFFFF )
    v7 = strlen(*(this + 0xD));
  else
    v7 = (unsigned __int16)v7;
  if ( !v7 )
  {
    v3 = (NiAVObject *)(*(int (__thiscall **)(void *))(*(_DWORD *)v21 + 8))(v21);
    v8 = *((int (__thiscall **)(void *))*this + 0x35);
    v22 = v3;
    v9 = (char *)v8(this);
    NiObjectNET_SetName((NiObjectNET *)v3, v9);
  }
  if ( ((unsigned int)*(this + 2) & 0x10) != 0 )
  {
    if ( arg0 )
      sub_46A9C0(arg0, 1);
  }
  v20 = 1.0;
  if ( arg0 )
    v20 = arg0->vtbl->GetScale(arg0);
  sub_478B90(&v14);
  v18 = v20;
  v17 = v20;
  v16 = v20;
  LOWORD(v10) = *((_WORD *)this + 0x1C);
  LOBYTE(v23) = 1;
  if ( (_WORD)v10 == 0xFFFF )
    v10 = strlen(*(this + 0xD));
  else
    v10 = (unsigned __int16)v10;
  if ( v10 )
  {
    v22 = (NiAVObject *)sub_700610(v21, (int)&v14);
    v3 = v22;
  }
  if ( v3 )
  {
    v11 = arg0->vtbl->GetPos(arg0);
    v3->members.m_localTransform.pos.x = *v11;
    v3->members.m_localTransform.pos.y = v11[1];
    v3->members.m_localTransform.pos.z = v11[2];
    qmemcpy(&v3->members.m_localTransform, sub_4D7AF0((float *)arg0, v13), 0x24u);
    NiAVObject_UpdateNiAVObject(v22, 0.0, 0);
    a2 = arg0;
    v3 = v22;
  }
  sub_4B1600(this, a2, (int)v3);
  NiAVObject_InitializePropertyState(v3);
  LOBYTE(v23) = 0;
  if ( v14 )
    (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v14)(v14, 1);
  if ( v15 )
    (**v15)(v15, 1);
  return v3;
}
