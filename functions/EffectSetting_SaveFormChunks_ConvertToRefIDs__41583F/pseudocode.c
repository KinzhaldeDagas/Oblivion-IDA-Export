// Verified (Oblivion): save conversion changes EffectSetting pointer fields at +0x70..+0x8C—including effectShader +0x78 and enchantEffect +0x7C—from TESForm pointers into FormIDs before writing the data block.
int __usercall EffectSetting_SaveFormChunks_::ConvertToRefIDs@<eax>(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v26; // [esp+4h] [ebp+4h]
  int v27; // [esp+8h] [ebp+8h]
  int v28; // [esp+Ch] [ebp+Ch]
  int v29; // [esp+10h] [ebp+10h]

  v11 = a1[0x20]; /*0x41583f*/
  v26 = v11; /*0x415847*/
  if ( v11 ) /*0x41584b*/
    v12 = *(_DWORD *)(v11 + 0xC); /*0x41584d*/
  else
    v12 = 0; /*0x415852*/
  a1[0x20] = v12; /*0x415854*/
  v13 = a1[0x21]; /*0x41585a*/
  v27 = v13; /*0x415862*/
  if ( v13 ) /*0x415866*/
    v14 = *(_DWORD *)(v13 + 0xC); /*0x415868*/
  else
    v14 = 0; /*0x41586d*/
  a1[0x21] = v14; /*0x41586f*/
  v15 = a1[0x22]; /*0x415875*/
  v28 = v15; /*0x41587d*/
  if ( v15 ) /*0x415881*/
    v16 = *(_DWORD *)(v15 + 0xC); /*0x415883*/
  else
    v16 = 0; /*0x415888*/
  a1[0x22] = v16; /*0x41588a*/
  v17 = a1[0x23]; /*0x415890*/
  v29 = v17; /*0x415898*/
  if ( v17 ) /*0x41589c*/
    v18 = *(_DWORD *)(v17 + 0xC); /*0x41589e*/
  else
    v18 = 0; /*0x4158a3*/
  v19 = a1[0x1E]; /*0x4158a7*/
  a1[0x23] = v18; /*0x4158ad*/
  if ( v19 ) /*0x4158b3*/
    v20 = *(_DWORD *)(v19 + 0xC); /*0x4158b5*/
  else
    v20 = 0; /*0x4158ba*/
  v21 = a1[0x1F]; /*0x4158bc*/
  a1[0x1E] = v20; /*0x4158c1*/
  if ( v21 ) /*0x4158c4*/
    v22 = *(_DWORD *)(v21 + 0xC); /*0x4158c6*/
  else
    v22 = 0; /*0x4158cb*/
  v23 = a1[0x1C]; /*0x4158cd*/
  a1[0x1F] = v22; /*0x4158d2*/
  if ( v23 ) /*0x4158d5*/
    v24 = *(_DWORD *)(v23 + 0xC); /*0x4158d7*/
  else
    v24 = 0; /*0x4158dc*/
  a1[0x1C] = v24; /*0x4158de*/
  return EffectSetting_SaveFormChunks_::SaveDataBlock((int)a1, v26, v27, v28, v29, a6, a7, a8, a9, a10, a11);
}
