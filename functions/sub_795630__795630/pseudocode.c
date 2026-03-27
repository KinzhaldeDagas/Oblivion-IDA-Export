void __userpurge sub_795630(_DWORD *this@<ecx>, unsigned int a2@<ebp>, _DWORD *a3)
{
  int v4; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-18h]
  int v6; // [esp+24h] [ebp-4h]

  sub_795480(&v4, a2, (unsigned int)this, (int)this);
  v6 = 0;
  sub_795510(this, a2, (int)a3);
  sub_795510(a3, a2, (int)&v4);
  if ( v5 )
    FormHeapFree(v5);
}
