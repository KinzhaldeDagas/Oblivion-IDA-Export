0x6D1520: push    0FFFFFFFFh
0x6D1522: push    offset SEH_6D1520
0x6D1527: mov     eax, large fs:0
0x6D152D: push    eax
0x6D152E: push    ecx
0x6D152F: push    ebx
0x6D1530: push    esi
0x6D1531: mov     eax, ds:0B30AACh
0x6D1536: xor     eax, esp
0x6D1538: push    eax
0x6D1539: lea     eax, [esp+1Ch+var_C]
0x6D153D: mov     large fs:0, eax
0x6D1543: push    5Ch ; '\'; Size
0x6D1545: call    FormHeapAlloc
0x6D154A: mov     esi, eax
0x6D154C: add     esp, 4
0x6D154F: mov     [esp+1Ch+var_10], esi
0x6D1553: xor     ebx, ebx
0x6D1555: cmp     esi, ebx
0x6D1557: mov     [esp+1Ch+var_4], ebx
0x6D155B: jz      short loc_6D15B0
0x6D155D: mov     ecx, esi
0x6D155F: call    sub_6D04E0
0x6D1564: mov     dword ptr [esi], offset ??_7NiGeomMorpherController@@6B@; const NiGeomMorpherController::`vftable'
0x6D156A: mov     dword ptr [esi+40h], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x6D1571: mov     [esi+48h], bx
0x6D1575: mov     word ptr [esi+4Eh], 1
0x6D157B: mov     [esi+4Ah], bx
0x6D157F: mov     [esi+4Ch], bx
0x6D1583: mov     [esi+44h], ebx
0x6D1586: mov     [esi+50h], ebx
0x6D1589: mov     [esi+54h], ebx
0x6D158C: mov     [esi+3Ch], bx
0x6D1590: mov     [esi+58h], bl
0x6D1593: mov     [esi+59h], bl
0x6D1596: mov     [esi+5Ah], bl
0x6D1599: mov     [esi+5Bh], bl
0x6D159C: mov     eax, esi
0x6D159E: mov     ecx, [esp+1Ch+var_C]
0x6D15A2: mov     large fs:0, ecx
0x6D15A9: pop     ecx
0x6D15AA: pop     esi
0x6D15AB: pop     ebx
0x6D15AC: add     esp, 10h
0x6D15AF: retn
0x6D15B0: xor     eax, eax
0x6D15B2: mov     ecx, [esp+1Ch+var_C]
0x6D15B6: mov     large fs:0, ecx
0x6D15BD: pop     ecx
0x6D15BE: pop     esi
0x6D15BF: pop     ebx
0x6D15C0: add     esp, 10h
0x6D15C3: retn
