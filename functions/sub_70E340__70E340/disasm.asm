0x70E340: push    0FFFFFFFFh
0x70E342: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x70E347: mov     eax, large fs:0
0x70E34D: push    eax
0x70E34E: push    ecx
0x70E34F: push    esi
0x70E350: push    edi
0x70E351: mov     eax, ds:0B30AACh
0x70E356: xor     eax, esp
0x70E358: push    eax
0x70E359: lea     eax, [esp+1Ch+var_C]
0x70E35D: mov     large fs:0, eax
0x70E363: mov     esi, ecx
0x70E365: mov     [esp+1Ch+var_10], esi
0x70E369: call    NiObject_constr
0x70E36E: xor     edi, edi
0x70E370: lea     ecx, [esi+8]
0x70E373: mov     [esp+1Ch+var_4], edi
0x70E377: mov     dword ptr [esi], offset ??_7NiPixelData@@6B@; const NiPixelData::`vftable'
0x70E37D: call    InitSurfacEData
0x70E382: mov     [esi+4Ch], edi
0x70E385: mov     [esi+50h], edi
0x70E388: mov     [esi+54h], edi
0x70E38B: mov     [esi+58h], edi
0x70E38E: mov     [esi+5Ch], edi
0x70E391: mov     [esi+60h], edi
0x70E394: mov     [esi+6Ch], edi
0x70E397: mov     [esi+64h], edi
0x70E39A: mov     dword ptr [esi+68h], 1
0x70E3A1: mov     eax, esi
0x70E3A3: mov     ecx, [esp+1Ch+var_C]
0x70E3A7: mov     large fs:0, ecx
0x70E3AE: pop     ecx
0x70E3AF: pop     edi
0x70E3B0: pop     esi
0x70E3B1: add     esp, 10h
0x70E3B4: retn
