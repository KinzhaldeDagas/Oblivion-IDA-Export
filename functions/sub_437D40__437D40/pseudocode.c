void __thiscall sub_437D40(_DWORD **this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ecx
  volatile LONG *v5; // esi
  _BYTE *v6; // edi
  volatile LONG *v7; // [esp+8h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+Ch] [ebp-108h] BYREF

  v2 = (*(int (__thiscall **)(_DWORD))(**(this + 8) + 0x170))(*(this + 8));
  sub_46D540(Str, v2);
  v3 = *(_DWORD *)ModelLoaderPtr;
  v7 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, volatile LONG **))(*(_DWORD *)v3 + 4))(v3, Str, &v7) )
  {
    if ( v7 )
    {
      v4 = *((void **)v7 + 2);
      if ( v4 )
      {
        v5 = (volatile LONG *)sub_700900(v4);
        if ( v5 )
        {
          v6 = (_BYTE *)(*(int (__thiscall **)(volatile LONG *))(*v5 + 8))(v5);
          if ( v6 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 0x98))(v6) )
              sub_4A01B0(v6, 6);
          }
          else
          {
            v7 = v5;
            InterlockedIncrement(v5 + 1);
            sub_7016A0((NiD3DVertexShader *)&v7);
          }
          if ( v6 )
            ((void (__thiscall *)(_DWORD **, _BYTE *))(*this)[0xD])(this, v6);
        }
      }
    }
  }
}
