void __thiscall ExtraFollower::~ExtraFollower(ExtraFollower *this)
{
  _DWORD *v2; // esi
  int v3; // edi

  v2 = *((_DWORD **)this + 3);
  *(_DWORD *)this = &ExtraFollower::`vftable';
  if ( v2[1] )
  {
    do
    {
      v3 = *(_DWORD *)(v2[1] + 4);
      FormHeapFree(v2[1]);
      v2[1] = v3;
    }
    while ( v3 );
  }
  *v2 = 0;
  FormHeapFree(*((_DWORD *)this + 3));
  *(_DWORD *)this = &BSExtraData::`vftable';
}
