void __thiscall sub_51C8C0(char **this, TESObjectREFR *a2)
{
  char **v3; // esi
  char *v4; // eax
  char *v5; // edx
  char v6; // cl
  char *v7; // eax
  char *v8; // ecx
  _BYTE *v9; // edx
  char v10; // al
  char Str[260]; // [esp+Ch] [ebp-108h] BYREF

  v3 = this + 0x3C;
  if ( this != (char **)0xFFFFFF10 )
  {
    do
    {
      if ( !v3[1] && !*v3 )
        break;
      v4 = (char *)(*((int (__thiscall **)(char **))*(this + 0x2B) + 5))(this + 0x2B);
      v5 = Str;
      do
      {
        v6 = *v4;
        *v5++ = *v4++;
      }
      while ( v6 );
      v7 = strrchr(Str, 0x5C);
      v8 = *v3;
      v9 = v7 + 1;
      do
      {
        v10 = *v8;
        *v9++ = *v8++;
      }
      while ( v10 );
      QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)Str, 1, 1);
      v3 = (char **)v3[1];
    }
    while ( v3 );
  }
  sub_4B3210(this, a2);
}
