int __userpurge sub_7305F0@<eax>(int *this@<ecx>, size_t Size)
{
  int result; // eax
  size_t v4; // [esp-4h] [ebp-18h]
  float v5; // [esp+8h] [ebp-Ch] BYREF
  float v6; // [esp+Ch] [ebp-8h]
  float v7; // [esp+10h] [ebp-4h]

  LODWORD(v4) = Size; /*0x7305f9*/
  sub_721610((NiRenderer *)this, v4); /*0x7305fc*/
  if ( *(_DWORD *)(Size + 0xD8) >= 0x500000Eu ) /*0x73060c*/
    return sub_715420((char *)this + 0xC, Size); /*0x73064a*/
  v5 = 0.0; /*0x730614*/
  v6 = 0.0; /*0x730618*/
  v7 = 0.0; /*0x73061c*/
  result = sub_709430((char *)&v5, Size); /*0x730620*/
  *((float *)this + 3) = v5; /*0x730629*/
  *((float *)this + 4) = v6; /*0x730631*/
  *((float *)this + 5) = v7; /*0x730638*/
  *((float *)this + 6) = 1.0; /*0x73063d*/
  return result; /*0x730640*/
}
