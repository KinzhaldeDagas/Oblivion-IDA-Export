void __userpurge sub_78C6F0(float *this@<ecx>, void *Src, char a3, rsize_t MaxCount, rsize_t a5, int a6)
{
  rsize_t v7; // [esp-4h] [ebp-60h] BYREF
  char *v8; // [esp+4Ch] [ebp-10h]
  int v9; // [esp+58h] [ebp-4h]

  v8 = (char *)&v7 + 4;
  v9 = 0;
  if ( (a3 & 1) != 0 )
  {
    LODWORD(v7) = MaxCount;
    sub_789FE0(this, (int)Src, (unsigned int)Src, v7);
  }
  if ( (a3 & 2) != 0 )
  {
    LODWORD(v7) = HIDWORD(MaxCount);
    sub_78A390(this, (int)Src, (unsigned int)Src, v7);
  }
  if ( (a3 & 4) != 0 )
    sub_788120((unsigned __int8 *)this, (int)Src, a5);
  if ( (a3 & 8) != 0 )
  {
    if ( !*((_BYTE *)this + 0x6C) || (a3 & 0x10) != 0 )
      sub_788430((unsigned __int8 *)this, (int)Src);
    else
      sub_7887A0((unsigned __int8 *)this, *(float *)&Src, a3);
  }
}
