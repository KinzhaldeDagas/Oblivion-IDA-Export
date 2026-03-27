0x9E06B0: push    191h
0x9E06B5: mov     ecx, offset GameSettingCollection
0x9E06BA: call    SettingCollectionMap_constr
0x9E06BF: push    offset GameSettingCollection_Static_Destr; void (__cdecl *)()
0x9E06C4: mov     GameSettingCollection, offset ??_7GameSettingCollection@@6B@; const GameSettingCollection::`vftable' ...
0x9E06CE: call    _atexit
0x9E06D3: pop     ecx
0x9E06D4: retn
