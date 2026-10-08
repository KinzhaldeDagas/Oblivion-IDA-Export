void __thiscall sub_8C6680(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // ebx
  int v7; // esi
  NiRTTI *v8; // eax
  char v9; // al
  NiScreenElementsData *v10; // esi
  NiAVObject *v11; // eax
  NiAVObject *v12; // esi
  NiProperty *NiPropertyByID; // edi
  int v14; // eax
  float v15; // eax
  float v16; // ecx
  int v17; // [esp+14h] [ebp-24h]
  int v18; // [esp+18h] [ebp-20h]
  float v19; // [esp+1Ch] [ebp-1Ch]
  float v20; // [esp+20h] [ebp-18h] BYREF
  float v21; // [esp+24h] [ebp-14h]
  float v22; // [esp+28h] [ebp-10h]
  unsigned int v23; // [esp+34h] [ebp-4h]

  v3 = 0; /*0x8c66a9*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x8c66b4*/
    v17 = *(_DWORD *)(v4 + 0x30); /*0x8c66b9*/
  else
    v17 = 0; /*0x8c66bf*/
  v18 = 0; /*0x8c66c7*/
  if ( v17 > 0 )
  {
    do
    {
      if ( this && (v5 = *(this + 2)) != 0 ) /*0x8c66da*/
        v6 = (int *)(*(_DWORD *)(v5 + 0x28) + 8 * v3); /*0x8c66df*/
      else
        v6 = &unk_BA8138; /*0x8c66e4*/
      v7 = *v6; /*0x8c66e9*/
      if ( *v6 )
      {
        v8 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(*v6); /*0x8c66fa*/
        if ( v8 ) /*0x8c66fe*/
        {
          while ( v8 != &stru_B3FD0C ) /*0x8c6705*/
          {
            v8 = v8->parent; /*0x8c6707*/
            if ( !v8 ) /*0x8c670c*/
              goto LABEL_14; /*0x8c670c*/
          }
          v9 = 1; /*0x8c6747*/
        }
        else
        {
LABEL_14:
          v9 = 0; /*0x8c670e*/
        }
        v10 = v9 != 0 ? (NiScreenElementsData *)v7 : 0;
        if ( v10 ) /*0x8c6718*/
        {
          v11 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x8c6723*/
          v23 = 0; /*0x8c6731*/
          if ( v11 ) /*0x8c6739*/
            v12 = sub_719A20(v11, v10); /*0x8c6743*/
          else
            v12 = 0; /*0x8c674b*/
          v23 = 0xFFFFFFFF; /*0x8c6754*/
          NiObjectNET_SetName((NiObjectNET *)v12, "bhkNiTriStripsShape"); /*0x8c675c*/
          v19 = fabs(sub_8C6210(this)); /*0x8c676a*/
          v12->members.m_localTransform.scale = v19; /*0x8c6775*/
          (*(void (__thiscall **)(_DWORD *, NiAVObject *))(*this + 0x98))(this, v12); /*0x8c6781*/
          NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v12, 2); /*0x8c678c*/
          if ( NiPropertyByID ) /*0x8c6790*/
          {
            if ( *v6 ) /*0x8c6792*/
              v14 = (*(unsigned __int16 *)(*v6 + 0x2C) >> 6) & 0x3F; /*0x8c679f*/
            else
              v14 = 0; /*0x8c67a4*/
            v20 = 0.0; /*0x8c67ac*/
            v21 = 0.0; /*0x8c67b1*/
            v22 = 0.0; /*0x8c67b6*/
            sub_8A2730(v14, &v20); /*0x8c67ba*/
            v15 = v21; /*0x8c67c3*/
            v16 = v22; /*0x8c67c7*/
            *(float *)&NiPropertyByID[2].members.m_extraDataList = v20; /*0x8c67cb*/
            ++NiPropertyByID[3].members.m_controller; /*0x8c67d1*/
            *(float *)&NiPropertyByID[2].members.m_extraDataListLen = v15; /*0x8c67d5*/
            *(float *)&NiPropertyByID[3].vtbl = v16; /*0x8c67d8*/
          }
          (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v12, 0); /*0x8c67ea*/
          v3 = v18; /*0x8c67ec*/
        }
      }
      v18 = ++v3; /*0x8c67f7*/
    }
    while ( v3 < v17 );
  }
}
