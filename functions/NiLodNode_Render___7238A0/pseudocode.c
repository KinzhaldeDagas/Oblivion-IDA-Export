int __thiscall NiLodNode_Render_(NiLODNode *this, NiCullingProcess *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( *((_BYTE *)this + 0x100) )
  {
    v3 = *((_DWORD *)this + 0x3F);
    if ( v3 )
    {
      *((_DWORD *)this + 0x38) = (*(int (__thiscall **)(int, NiCamera *, NiLODNode *))(*(_DWORD *)v3 + 0x4C))(
                                   v3,
                                   a2->Camera,
                                   this);
      if ( dword_B273FC >= 0 )
        *((_DWORD *)this + 0x38) = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x3F) + 0x58))(
                                     *((_DWORD *)this + 0x3F),
                                     dword_B273FC);
      if ( *((int *)this + 0x38) >= 0 )
      {
        v4 = *((unsigned __int16 *)this + 0x5B);
        do
        {
          v5 = *((_DWORD *)this + 0x38);
          if ( v5 < v4 && *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v5) )
            break;
          v6 = v5 - 1;
          *((_DWORD *)this + 0x38) = v6;
        }
        while ( v6 >= 0 );
      }
    }
  }
  return NiSwitchNode_Render_((NiNode *)this, a2);
}
