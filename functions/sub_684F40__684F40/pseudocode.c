void __thiscall sub_684F40(int this, TESObjectREFR *actor)
{
  TESHealthForm *v3; // esi
  NiSurfaceData *SurfaceData; // eax
  void *v5; // ebx
  char *Health; // eax
  char *v7; // eax
  const char *v8; // eax
  char v9; // dl
  void *v10; // [esp+14h] [ebp-160h] BYREF
  NiDX92DBufferData *v11; // [esp+18h] [ebp-15Ch] BYREF
  NiPoint3 start; // [esp+1Ch] [ebp-158h] BYREF
  NiPoint3 end; // [esp+28h] [ebp-14Ch] BYREF
  float segmentQuery[6]; // [esp+34h] [ebp-140h] BYREF
  char v15; // [esp+4Ch] [ebp-128h]
  char Format[260]; // [esp+60h] [ebp-114h] BYREF
  unsigned int v17; // [esp+170h] [ebp-4h]

  v3 = (TESHealthForm *)(this + 0x14); /*0x684f8d*/
  if ( sub_68BFB0((_DWORD *)(this + 0x14), &v11, (NiDX92DBufferData **)&v10) ) /*0x684f93*/
  {
    if ( v11 ) /*0x684fa9*/
    {
      SurfaceData = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v10); /*0x684fab*/
      sub_6A2FD0(v11, (int)SurfaceData); /*0x684fb5*/
      v5 = v10; /*0x684fc0*/
      if ( v10 ) /*0x684fc2*/
      {
        Shared_NoOpVirtual_60D0A0(v10); /*0x684fc4*/
        FormHeapFree((unsigned int)v5); /*0x684fca*/
      }
      v10 = 0; /*0x684fd6*/
      start = *(NiPoint3 *)EmbeddedList_GetHead((char *)v11); /*0x684fe5*/
      Health = (char *)TESHealthForm_GetHealth(v3); /*0x684ff9*/
      end = *(NiPoint3 *)EmbeddedList_GetHead(Health); /*0x685007*/
    }
    else
    {
      sub_68C170((NiSurfaceData **)v3, (NiDX92DBufferData *)v10); /*0x68501e*/
      start = *(NiPoint3 *)actor->vtbl->GetPos(actor); /*0x685031*/
      sub_68C280((TeleportData **)v3, &start, 0); /*0x68504c*/
      v7 = (char *)TESHealthForm_GetHealth(v3); /*0x685053*/
      end = *(NiPoint3 *)EmbeddedList_GetHead(v7); /*0x685061*/
    }
    if ( MEMORY[0xB333B4] == (TESChildCELL *)actor && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908) ) /*0x68508b*/
    {
      v8 = actor->vtbl->super.GetEditorName(actor); /*0x68509e*/
      _sprintf(Format, "Actor '%s' expanding high level path for new cells.", v8); /*0x6850ab*/
      Interface_ConsolePrint(Format); /*0x6850b5*/
    }
    sub_67D760(segmentQuery); /*0x6850c1*/
    v9 = *(_BYTE *)(this + 0x10); /*0x6850c6*/
    v17 = 0; /*0x6850da*/
    v15 = v9; /*0x6850e5*/
    ConnectedPointGraph_CanTraverseSegment(segmentQuery, &start, &end, actor, 0.0); /*0x6850e9*/
    sub_67E000((char **)segmentQuery, v3); /*0x6850f3*/
    sub_684000((int *)this, (Actor *)actor); /*0x6850fb*/
    v17 = 0xFFFFFFFF; /*0x685104*/
    Shared_NoOpVirtual_60D0A0(segmentQuery); /*0x68510f*/
  }
}
