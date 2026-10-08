void __thiscall __noreturn sub_6F44D0(
        OB_stString28_010201A0 *this,
        int a2,
        OB_stString28_010201A0 *a3,
        unsigned int a4,
        OB_stString28_010201A0 *a5)
{
  char *heapData; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  OB_SFrondGuide_010201A0 *_010201A0; // eax
  OB_stString28_010201A0 *v13; // ecx
  OB_stString28_010201A0 *v14; // ecx
  _DWORD v15[6]; // [esp+0h] [ebp-64h] BYREF
  OB_stString28_010201A0 *v16; // [esp+18h] [ebp-4Ch]
  unsigned int v17; // [esp+1Ch] [ebp-48h]
  OB_stString28_010201A0 v18; // [esp+20h] [ebp-44h] BYREF
  unsigned int v19; // [esp+44h] [ebp-20h]
  int v20; // [esp+48h] [ebp-1Ch]
  int v21; // [esp+4Ch] [ebp-18h]
  _DWORD *v22; // [esp+54h] [ebp-10h]
  int v23; // [esp+60h] [ebp-4h]
  int savedregs; // [esp+64h] [ebp+0h] BYREF

  v22 = v15; /*0x6f44fb*/
  v16 = this; /*0x6f4507*/
  sub_6F2DB0(&v18, (int)&savedregs, a5); /*0x6f450a*/
  heapData = this->storage.heapData; /*0x6f450f*/
  v7 = 0; /*0x6f4512*/
  v23 = 0; /*0x6f4516*/
  if ( heapData ) /*0x6f4519*/
    v7 = (*((_DWORD *)&this->storage.heapData + 2) - (int)heapData) / 0x30; /*0x6f452f*/
  if ( a4 ) /*0x6f4536*/
  {
    if ( heapData ) /*0x6f453e*/
      v8 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x30; /*0x6f4558*/
    else
      v8 = 0; /*0x6f4540*/
    if ( 0x5555555 - v8 < a4 ) /*0x6f4563*/
      OB_stVector_ThrowLengthError_010201A0(a4); /*0x6f4565*/
    if ( heapData ) /*0x6f456c*/
      v9 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x30; /*0x6f4586*/
    else
      v9 = 0; /*0x6f456e*/
    if ( v7 < a4 + v9 ) /*0x6f458c*/
    {
      if ( 0x5555555 - (v7 >> 1) >= v7 ) /*0x6f459f*/
        v10 = (v7 >> 1) + v7; /*0x6f45a5*/
      else
        v10 = 0; /*0x6f45a1*/
      if ( heapData ) /*0x6f45a9*/
        v11 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x30; /*0x6f45c3*/
      else
        v11 = 0; /*0x6f45ab*/
      if ( v10 < a4 + v11 ) /*0x6f45c9*/
        v10 = a4 + OB_stVector_SFrondGuide_Size_010201A0((const OB_stVector16_010201A0 *)this); /*0x6f45d4*/
      _010201A0 = OB_stVector_SFrondGuide_Allocate_010201A0(v10); /*0x6f45d9*/
      v13 = (OB_stString28_010201A0 *)this->storage.heapData; /*0x6f45de*/
      LOBYTE(v17) = 0; /*0x6f45e1*/
      v15[4] = _010201A0; /*0x6f45ef*/
      v15[5] = _010201A0; /*0x6f45f2*/
      LOBYTE(v23) = 1; /*0x6f45fa*/
      sub_6F33C0(v13, a3, (OB_stString28_010201A0 *)_010201A0); /*0x6f45fe*/
    }
    v14 = *((OB_stString28_010201A0 **)&this->storage.heapData + 1); /*0x6f46bc*/
    v17 = (unsigned int)v14; /*0x6f46d9*/
    if ( ((char *)v14 - (char *)a3) / 0x30 < a4 ) /*0x6f46dc*/
    {
      v17 = 0x30 * a4; /*0x6f46e8*/
      sub_6F4190(a3, v14, (OB_stString28_010201A0 *)((char *)a3 + 0x30 * a4)); /*0x6f46f2*/
    }
    v16 = (OB_stString28_010201A0 *)((char *)v14 + 0xFFFFFFD0 * a4); /*0x6f4779*/
    sub_6F4190(v16, v14, v14); /*0x6f477c*/
  }
  if ( v19 ) /*0x6f47a7*/
    FormHeapFree(v19); /*0x6f47aa*/
  v19 = 0; /*0x6f47b8*/
  v20 = 0; /*0x6f47bb*/
  v21 = 0; /*0x6f47be*/
  if ( v18.capacity >= 0x10 ) /*0x6f47c1*/
    FormHeapFree((unsigned int)v18.storage.heapData); /*0x6f47c7*/
}
