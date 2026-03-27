void __thiscall sub_8C6680(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // ebx
  int v7; // esi
  int v8; // eax
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

  v3 = 0;
  if ( this && (v4 = *(this + 2)) != 0 )
    v17 = *(_DWORD *)(v4 + 0x30);
  else
    v17 = 0;
  v18 = 0;
  if ( v17 > 0 )
  {
    do
    {
      if ( this && (v5 = *(this + 2)) != 0 )
        v6 = (int *)(*(_DWORD *)(v5 + 0x28) + 8 * v3);
      else
        v6 = &dword_BA8138;
      v7 = *v6;
      if ( *v6 )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(*v6);
        if ( v8 )
        {
          while ( (char *)v8 != dword_B3FD0C )
          {
            v8 = *(_DWORD *)(v8 + 4);
            if ( !v8 )
              goto LABEL_14;
          }
          v9 = 1;
        }
        else
        {
LABEL_14:
          v9 = 0;
        }
        v10 = v9 != 0 ? (NiScreenElementsData *)v7 : 0;
        if ( v10 )
        {
          v11 = (NiAVObject *)FormHeapAlloc(0xC0u);
          v23 = 0;
          if ( v11 )
            v12 = sub_719A20(v11, v10);
          else
            v12 = 0;
          v23 = 0xFFFFFFFF;
          NiObjectNET_SetName((NiObjectNET *)v12, "bhkNiTriStripsShape");
          v19 = fabs(sub_8C6210(this));
          v12->members.m_localTransform.scale = v19;
          (*(void (__thiscall **)(_DWORD *, NiAVObject *))(*this + 0x98))(this, v12);
          NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v12, 2);
          if ( NiPropertyByID )
          {
            if ( *v6 )
              v14 = (*(unsigned __int16 *)(*v6 + 0x2C) >> 6) & 0x3F;
            else
              v14 = 0;
            v20 = 0.0;
            v21 = 0.0;
            v22 = 0.0;
            sub_8A2730(v14, &v20);
            v15 = v21;
            v16 = v22;
            *(float *)&NiPropertyByID[2].members.m_extraDataList = v20;
            ++NiPropertyByID[3].members.m_controller;
            *(float *)&NiPropertyByID[2].members.m_extraDataListLen = v15;
            *(float *)&NiPropertyByID[3].vtbl = v16;
          }
          (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v12, 0);
          v3 = v18;
        }
      }
      v18 = ++v3;
    }
    while ( v3 < v17 );
  }
}
