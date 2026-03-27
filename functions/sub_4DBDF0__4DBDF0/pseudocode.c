ExtraLock *__thiscall sub_4DBDF0(_BYTE *this)
{
  ExtraDataList *v1; // edi
  ExtraLock *result; // eax
  int v3; // eax
  int v4; // esi

  v1 = (ExtraDataList *)(this + 0x44);
  result = sub_41E690((ExtraDataList *)(this + 0x44));
  if ( !result )
  {
    v3 = FormHeapAlloc(0xCu);
    if ( v3 )
    {
      v4 = v3;
      *(_BYTE *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_BYTE *)(v3 + 8) = 0;
      sub_41EAF0(v1, v3);
      return (ExtraLock *)v4;
    }
    else
    {
      sub_41EAF0(v1, 0);
      return 0;
    }
  }
  return result;
}
