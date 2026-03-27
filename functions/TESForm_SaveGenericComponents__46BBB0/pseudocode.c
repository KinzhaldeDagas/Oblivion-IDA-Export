char __userpurge TESForm_SaveGenericComponents@<al>(TESForm *this@<ecx>, int a2@<edi>, void *Src, size_t Size)
{
  _DWORD *v5; // eax
  int v6; // edi
  _BYTE *v7; // edi
  unsigned __int16 v8; // bx
  int v9; // ebp
  float *v10; // esi
  size_t v12; // [esp-10h] [ebp-28h]
  float *v13; // [esp+4h] [ebp-14h]
  void *v14; // [esp+8h] [ebp-10h]
  char *v15; // [esp+Ch] [ebp-Ch]
  float *v16; // [esp+10h] [ebp-8h]
  _DWORD *v17; // [esp+14h] [ebp-4h]
  float *Srca; // [esp+1Ch] [ebp+4h]
  void *Sizea; // [esp+20h] [ebp+8h]

  if ( (unsigned int)Size <= 0xFFFF )
  {
    HIDWORD(v12) = a2;
    v6 = TESForm_Static_FormRecordSize;
    LODWORD(v12) = Size;
    TESForm_PutFormRecordChunkData(0x41544144, Src, v12);
    v15 = (char *)TESForm_Static_FormRecordBuffer + v6;
    v7 = OblivionDynamicCast(
           this,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESUsesForm `RTTI Type Descriptor',
           0);
    v16 = (float *)OblivionDynamicCast(
                     this,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESValueForm `RTTI Type Descriptor',
                     0);
    Sizea = OblivionDynamicCast(
              this,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESHealthForm `RTTI Type Descriptor',
              0);
    Srca = (float *)OblivionDynamicCast(
                      this,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESWeightForm `RTTI Type Descriptor',
                      0);
    v13 = (float *)OblivionDynamicCast(
                     this,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESQualityForm `RTTI Type Descriptor',
                     0);
    v14 = OblivionDynamicCast(
            this,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESAttackDamageForm `RTTI Type Descriptor',
            0);
    v5 = OblivionDynamicCast(
           this,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESAttributes `RTTI Type Descriptor',
           0);
    v17 = v5;
    v8 = v7 != 0;
    if ( v16 )
      v8 += 4;
    if ( Sizea )
      v8 += 4;
    if ( Srca )
      v8 += 4;
    if ( v13 )
      v8 += 4;
    if ( v14 )
      v8 += 2;
    if ( v5 )
      v8 += 8;
    if ( v8 )
    {
      v9 = TESForm_Static_FormRecordSize;
      LOBYTE(v5) = sub_46AED0((int)v15, v8);
      if ( (_BYTE)v5 )
      {
        v10 = (float *)((char *)TESForm_Static_FormRecordBuffer + v9);
        if ( v7 )
        {
          *(_BYTE *)v10 = v7[4];
          v10 = (float *)((char *)v10 + 1);
        }
        if ( v16 )
          *v10++ = v16[1];
        if ( Sizea )
          *(_DWORD *)v10++ = (*(int (__thiscall **)(void *))(*(_DWORD *)Sizea + 0x10))(Sizea);
        LOBYTE(v5) = (_BYTE)Srca;
        if ( Srca )
        {
          ++v10;
          v10[0xFFFFFFFF] = Srca[1];
        }
        if ( v13 )
        {
          LOBYTE(v5) = sub_46AFC0(v13);
          ++v10;
          v10[0xFFFFFFFF] = (float)(unsigned __int8)v5;
        }
        if ( v14 )
        {
          LOWORD(v5) = (*(int (__thiscall **)(void *))(*(_DWORD *)v14 + 0x10))(v14);
          *(_WORD *)v10 = (_WORD)v5;
          v10 = (float *)((char *)v10 + 2);
        }
        if ( v17 )
          LOBYTE(v5) = sub_468C80(v17, v10);
      }
    }
  }
  else
  {
    LOBYTE(v5) = PrintError("Trying to SaveData that's too large.");
  }
  return (char)v5;
}
