bool *__thiscall sub_8F5DB0(_DWORD *this, bool *a2)
{
  int v2; // eax
  char v3; // dl
  char v5; // [esp+1h] [ebp-1h] BYREF

  v5 = HIBYTE(this);
  v2 = *(this + 2);
  if ( v2 )
  {
    v3 = *(_BYTE *)(*(int (__stdcall **)(char *))(*(_DWORD *)v2 + 8))(&v5);
    *a2 = v3;
    return a2;
  }
  else
  {
    *a2 = *(this + 4) != *(this + 5);
    return a2;
  }
}
