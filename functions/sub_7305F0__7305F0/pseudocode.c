int __userpurge sub_7305F0@<eax>(int *this@<ecx>, size_t Size)
{
  int result; // eax
  size_t v4; // [esp-4h] [ebp-18h]
  float v5; // [esp+8h] [ebp-Ch] BYREF
  float v6; // [esp+Ch] [ebp-8h]
  float v7; // [esp+10h] [ebp-4h]

  LODWORD(v4) = Size;
  sub_721610((NiRenderer *)this, v4);
  if ( *(_DWORD *)(Size + 0xD8) >= 0x500000Eu )
    return sub_715420((char *)this + 0xC, Size);
  v5 = 0.0;
  v6 = 0.0;
  v7 = 0.0;
  result = sub_709430((char *)&v5, Size);
  *((float *)this + 3) = v5;
  *((float *)this + 4) = v6;
  *((float *)this + 5) = v7;
  *((float *)this + 6) = 1.0;
  return result;
}
