void __cdecl sub_550980(int a1, float a2)
{
  NiObject *v2; // edi
  int v3; // ecx
  _DWORD v4[2]; // [esp+Ch] [ebp-Ch] BYREF
  char v5; // [esp+14h] [ebp-4h]

  if ( a1 )
  {
    if ( a2 >= 0.0 )
    {
      v2 = sub_550850(a1);
      if ( v2 )
      {
        if ( sub_728AB0(*(_DWORD *)(a1 + 0xB4), 1) )
        {
          v3 = *(_DWORD *)(a1 + 0xB4);
          v4[0] = 0;
          v4[1] = 0;
          v5 = 0;
          sub_728B60(v3, (int)v4);
          sub_5508F0(a1, (int)v4);
          if ( v4[0] )
            ((void (__thiscall *)(NiObject *, _DWORD *, _DWORD, _DWORD))v2->__vftable->Copy)(
              v2,
              v4,
              *(unsigned __int16 *)(*(_DWORD *)(a1 + 0xB4) + 8),
              LODWORD(a2));
          sub_728B20(*(_DWORD *)(a1 + 0xB4));
        }
      }
    }
  }
}
