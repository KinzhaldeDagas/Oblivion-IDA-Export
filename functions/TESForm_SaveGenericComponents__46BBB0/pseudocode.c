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

  if ( (unsigned int)Size <= 0xFFFF ) /*0x46bbbf*/
  {
    HIDWORD(v12) = a2; /*0x46bbd7*/
    v6 = MEMORY[0xB33C18]; /*0x46bbd8*/
    LODWORD(v12) = Size; /*0x46bbde*/
    TESForm_PutFormRecordChunkData(0x41544144, Src, v12); /*0x46bbeb*/
    v15 = (char *)MEMORY[0xB33C14] + v6; /*0x46bc05*/
    v7 = OblivionDynamicCast( /*0x46bc1b*/
           this,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESUsesForm `RTTI Type Descriptor',
           0);
    v16 = (float *)OblivionDynamicCast( /*0x46bc31*/
                     this,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESValueForm `RTTI Type Descriptor',
                     0);
    Sizea = OblivionDynamicCast( /*0x46bc4a*/
              this,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESHealthForm `RTTI Type Descriptor',
              0);
    Srca = (float *)OblivionDynamicCast( /*0x46bc60*/
                      this,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESWeightForm `RTTI Type Descriptor',
                      0);
    v13 = (float *)OblivionDynamicCast( /*0x46bc76*/
                     this,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESQualityForm `RTTI Type Descriptor',
                     0);
    v14 = OblivionDynamicCast( /*0x46bc8c*/
            this,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESAttackDamageForm `RTTI Type Descriptor',
            0);
    v5 = OblivionDynamicCast( /*0x46bc90*/
           this,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESAttributes `RTTI Type Descriptor',
           0);
    v17 = v5; /*0x46bc9a*/
    v8 = v7 != 0; /*0x46bca0*/
    if ( v16 ) /*0x46bca7*/
      v8 += 4; /*0x46bca9*/
    if ( Sizea ) /*0x46bcb1*/
      v8 += 4; /*0x46bcb3*/
    if ( Srca ) /*0x46bcbb*/
      v8 += 4; /*0x46bcbd*/
    if ( v13 ) /*0x46bcc5*/
      v8 += 4; /*0x46bcc7*/
    if ( v14 ) /*0x46bccf*/
      v8 += 2; /*0x46bcd1*/
    if ( v5 ) /*0x46bcd6*/
      v8 += 8; /*0x46bcd8*/
    if ( v8 ) /*0x46bcde*/
    {
      v9 = MEMORY[0xB33C18]; /*0x46bce8*/
      LOBYTE(v5) = TESForm_ExpandChunk((int)v15, v8); /*0x46bcf2*/
      if ( (_BYTE)v5 ) /*0x46bcf9*/
      {
        v10 = (float *)((char *)MEMORY[0xB33C14] + v9); /*0x46bd06*/
        if ( v7 ) /*0x46bd09*/
        {
          *(_BYTE *)v10 = v7[4]; /*0x46bd0e*/
          v10 = (float *)((char *)v10 + 1); /*0x46bd10*/
        }
        if ( v16 ) /*0x46bd19*/
          *v10++ = v16[1]; /*0x46bd1e*/
        if ( Sizea ) /*0x46bd29*/
          *(_DWORD *)v10++ = (*(int (__thiscall **)(void *))(*(_DWORD *)Sizea + 0x10))(Sizea); /*0x46bd32*/
        LOBYTE(v5) = (_BYTE)Srca; /*0x46bd37*/
        if ( Srca ) /*0x46bd3d*/
        {
          ++v10; /*0x46bd42*/
          v10[0xFFFFFFFF] = Srca[1]; /*0x46bd45*/
        }
        if ( v13 ) /*0x46bd4e*/
        {
          LOBYTE(v5) = sub_46AFC0(v13); /*0x46bd55*/
          ++v10; /*0x46bd5c*/
          v10[0xFFFFFFFF] = (float)(unsigned __int8)v5; /*0x46bd63*/
        }
        if ( v14 ) /*0x46bd6c*/
        {
          LOWORD(v5) = (*(int (__thiscall **)(void *))(*(_DWORD *)v14 + 0x10))(v14); /*0x46bd73*/
          *(_WORD *)v10 = (_WORD)v5; /*0x46bd75*/
          v10 = (float *)((char *)v10 + 2); /*0x46bd78*/
        }
        if ( v17 ) /*0x46bd81*/
          LOBYTE(v5) = sub_468C80(v17, v10); /*0x46bd84*/
      }
    }
  }
  else
  {
    LOBYTE(v5) = PrintError("Trying to SaveData that's too large."); /*0x46bbc6*/
  }
  return (char)v5; /*0x46bbce*/
}
