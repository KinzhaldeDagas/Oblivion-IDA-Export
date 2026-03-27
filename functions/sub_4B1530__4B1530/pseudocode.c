void __thiscall sub_4B1530(int this, int a2)
{
  unsigned int v2; // eax
  int v3; // eax

  LOWORD(v2) = *(_WORD *)(this + 0x38);
  if ( (_WORD)v2 == 0xFFFF )
    v2 = strlen(*(const char **)(this + 0x34));
  else
    v2 = (unsigned __int16)v2;
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 0x30) + 0x14))(this + 0x30);
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v3, 1, 1);
  }
}
