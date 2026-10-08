// TESAmmo 3D creator. Builds the generic bound-object clone, reads ExtraCount, and removes ArrowQuiver/ArrowN children so visible quiver arrows match the represented stack count.
NiNode *__thiscall TESAmmo_CreateQuiver3D(TESBoundObject *this, TESObjectREFR *reference, int arg1)
{
  TESObjectREFR *v3; // edi
  NiNode *v4; // ebp
  int ExtraCount; // ebx
  int v6; // eax
  int v8; // eax
  TESObjectREFR *v9; // edi
  BSStringT v10; // [esp+18h] [ebp-14h] BYREF
  unsigned int v11; // [esp+28h] [ebp-4h]

  v3 = reference; /*0x4a958b*/
  v4 = TESBoundObject_Create3DImpl(this, reference, arg1); /*0x4a959a*/
  if ( v3 ) /*0x4a959c*/
    ExtraCount = ExtraDataList_GetExtraCount(&v3->member.baseExtraList); /*0x4a95a6*/
  else
    ExtraCount = 1; /*0x4a95ab*/
  if ( v4 ) /*0x4a95b2*/
  {
    if ( ExtraCount < MEMORY[0xB35588] ) /*0x4a95ba*/
    {
      if ( ExtraCount == 1 ) /*0x4a95bf*/
      {
        v6 = (int)v4->vtbl->super.GetObjectByName((NiAVObject *)v4, "ArrowQuiver"); /*0x4a95ce*/
        if ( v6 ) /*0x4a95d2*/
        {
          (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v6 + 0x1C) + 0x88))( /*0x4a95e5*/
            *(_DWORD *)(v6 + 0x1C),
            &arg1,
            v6);
          NiPointerSlot_Release((NiD3DVertexShader *)&arg1); /*0x4a95eb*/
        }
        sub_8A5720((int)v4); /*0x4a95f1*/
      }
      else
      {
        while ( ExtraCount < MEMORY[0xB35588] ) /*0x4a9617*/
        {
          v10.m_data = 0; /*0x4a9619*/
          *(_DWORD *)&v10.m_dataLen = 0; /*0x4a961d*/
          v11 = 0; /*0x4a9632*/
          BSStringT_Static_Format(&v10, "Arrow%d", ExtraCount); /*0x4a9636*/
          v8 = (int)v4->vtbl->super.GetObjectByName((NiAVObject *)v4, v10.m_data); /*0x4a964b*/
          if ( v8 ) /*0x4a964f*/
          {
            (*(void (__thiscall **)(_DWORD, TESObjectREFR **, int))(**(_DWORD **)(v8 + 0x1C) + 0x88))( /*0x4a9662*/
              *(_DWORD *)(v8 + 0x1C),
              &reference,
              v8);
            if ( reference ) /*0x4a966a*/
            {
              v9 = reference; /*0x4a966c*/
              if ( !InterlockedDecrement((volatile LONG *)&reference->member) ) /*0x4a9672*/
                ((void (__thiscall *)(TESObjectREFR *, int))v9->vtbl->super.super.InitializeComponent)(v9, 1); /*0x4a9688*/
            }
          }
          v11 = 0xFFFFFFFF; /*0x4a968f*/
          FormHeapFree((unsigned int)v10.m_data); /*0x4a9697*/
          v10.m_data = 0; /*0x4a969f*/
          *(_DWORD *)&v10.m_dataLen = 0; /*0x4a96a8*/
          ++ExtraCount; /*0x4a96ad*/
        }
      }
    }
  }
  return v4; /*0x4a95fb*/
}
