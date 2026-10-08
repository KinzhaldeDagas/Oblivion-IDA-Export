// Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
OB_IdvFileError_010201A0 *__thiscall OB_IdvFileError_Ctor_010201A0(
        OB_IdvFileError_010201A0 *this,
        const OB_stString28_010201A0 *details,
        bool appendSystemError)
{
  int *v4; // eax
  char *v5; // esi
  OB_stString28_010201A0 *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  const OB_stString28_010201A0 *v9; // eax
  char v11; // [esp+14h] [ebp-9Ch]
  OB_stString28_010201A0 v12; // [esp+18h] [ebp-98h] BYREF
  OB_stString28_010201A0 v13; // [esp+34h] [ebp-7Ch] BYREF
  _BYTE v14[4]; // [esp+50h] [ebp-60h] BYREF
  unsigned int v15; // [esp+54h] [ebp-5Ch]
  int v16; // [esp+64h] [ebp-4Ch]
  unsigned int v17; // [esp+68h] [ebp-48h]
  int v18; // [esp+6Ch] [ebp-44h] BYREF
  unsigned int v19; // [esp+70h] [ebp-40h]
  int v20; // [esp+80h] [ebp-30h]
  unsigned int v21; // [esp+84h] [ebp-2Ch]
  int v22; // [esp+88h] [ebp-28h] BYREF
  unsigned int v23; // [esp+8Ch] [ebp-24h]
  int v24; // [esp+9Ch] [ebp-14h]
  unsigned int v25; // [esp+A0h] [ebp-10h]
  int v26; // [esp+ACh] [ebp-4h]

  if ( appendSystemError ) /*0x7891cc*/
  {
    v4 = _errno(); /*0x7891ce*/
    v5 = strerror(*v4); /*0x7891db*/
    v13.capacity = 0xF; /*0x7891e7*/
    v13.size = 0; /*0x7891eb*/
    v13.storage.inlineData[0] = 0; /*0x7891ef*/
    OB_stString28_AssignBytes_010201A0(&v13, v5, strlen(v5)); /*0x789207*/
    v6 = &v13; /*0x78920c*/
    v26 = 0; /*0x789210*/
    v11 = 1; /*0x789217*/
  }
  else
  {
    v12.capacity = 0xF; /*0x789230*/
    v12.size = 0; /*0x789234*/
    v12.storage.inlineData[0] = 0; /*0x789238*/
    OB_stString28_AssignBytes_010201A0(&v12, EmptyString, 0); /*0x78923c*/
    v6 = &v12; /*0x789241*/
    v26 = 1; /*0x789245*/
    v11 = 2; /*0x789250*/
  }
  v7 = (_DWORD *)sub_6F8D30((int)this, (int)&v22, details, " ["); /*0x78926d*/
  v26 = 2; /*0x789279*/
  v8 = (_DWORD *)sub_6F8430((int)v14, v7, v6); /*0x789284*/
  LOBYTE(v26) = 3; /*0x789297*/
  v9 = (const OB_stString28_010201A0 *)sub_6F8D30((int)this, (int)&v18, v8, (char *)&word_A61E98); /*0x78929f*/
  LOBYTE(v26) = 4; /*0x7892aa*/
  OB_std_runtime_error_CtorFromString_010201A0((OB_std_runtime_error_010201A0 *)this, v9); /*0x7892b2*/
  if ( v21 >= 0x10 ) /*0x7892c3*/
    FormHeapFree(v19); /*0x7892ca*/
  v21 = 0xF; /*0x7892d6*/
  v20 = 0; /*0x7892dd*/
  LOBYTE(v19) = 0; /*0x7892e4*/
  if ( v17 >= 0x10 ) /*0x7892e8*/
    FormHeapFree(v15); /*0x7892ef*/
  v17 = 0xF; /*0x7892fe*/
  v16 = 0; /*0x789302*/
  LOBYTE(v15) = 0; /*0x789306*/
  if ( v25 >= 0x10 ) /*0x78930a*/
    FormHeapFree(v23); /*0x789314*/
  v25 = 0xF; /*0x789321*/
  v24 = 0; /*0x789328*/
  LOBYTE(v23) = 0; /*0x78932f*/
  if ( (v11 & 2) != 0 ) /*0x789336*/
  {
    v11 &= ~2u; /*0x789338*/
    if ( v12.capacity >= 0x10 ) /*0x789341*/
      FormHeapFree((unsigned int)v12.storage.heapData); /*0x789348*/
    v12.capacity = 0xF; /*0x789350*/
    v12.size = 0; /*0x789354*/
    v12.storage.inlineData[0] = 0; /*0x789358*/
  }
  if ( (v11 & 1) != 0 && v13.capacity >= 0x10 ) /*0x789367*/
    FormHeapFree((unsigned int)v13.storage.heapData); /*0x78936e*/
  *(_DWORD *)this->exceptionBase = &IdvFileError::`vftable'; /*0x789376*/
  return this; /*0x78937f*/
}
