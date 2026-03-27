char __thiscall sub_43DF10(_DWORD *this)
{
  _DWORD *v1; // ecx
  TESObjectCELL *ParentCell; // eax
  int v3; // esi
  TESObjectCELL *v4; // edi
  int v6; // [esp+14h] [ebp-28h] BYREF
  TESChildCELL *v7; // [esp+18h] [ebp-24h] BYREF
  _DWORD *v8; // [esp+1Ch] [ebp-20h]
  _DWORD v9[3]; // [esp+20h] [ebp-1Ch] BYREF
  char v10; // [esp+2Ch] [ebp-10h]
  int v11; // [esp+38h] [ebp-4h]

  v8 = this;
  v9[0] = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::LockFreeMapIterator::`vftable';
  v9[1] = 0;
  v9[2] = 0;
  v10 = 0;
  v11 = 0;
  do
  {
    v7 = 0;
    v6 = 0;
    v1 = (_DWORD *)v8[2];
    LOBYTE(v11) = 1;
    LOBYTE(ParentCell) = sub_642D90(v1, (int)v9, &v7, &v6, 1);
    v3 = v6;
    if ( (_BYTE)ParentCell )
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v7);
      if ( ParentCell )
      {
        v4 = (TESObjectCELL *)(unsigned __int8)BYTE2(*(_DWORD *)(v3 + 0x10));
        ParentCell = (TESObjectCELL *)sub_440C80(TES, ParentCell, 0);
        if ( v4 != ParentCell )
          LOBYTE(ParentCell) = (*(int (__thiscall **)(int, TESObjectCELL *))(*(_DWORD *)v3 + 0x1C))(v3, ParentCell);
      }
    }
    LOBYTE(v11) = 0;
    if ( v3 )
    {
      ParentCell = (TESObjectCELL *)InterlockedDecrement((volatile LONG *)(v3 + 8));
      if ( !ParentCell )
        LOBYTE(ParentCell) = (**(int (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
  while ( (v10 & 2) == 0 );
  return (char)ParentCell;
}
