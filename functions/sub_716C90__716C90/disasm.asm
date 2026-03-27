0x716C90: push    0FFFFFFFFh
0x716C92: push    offset SEH_8C8970
0x716C97: mov     eax, large fs:0
0x716C9D: push    eax
0x716C9E: push    ecx
0x716C9F: push    ebx
0x716CA0: push    esi
0x716CA1: mov     eax, ds:0B30AACh
0x716CA6: xor     eax, esp
0x716CA8: push    eax
0x716CA9: lea     eax, [esp+1Ch+var_C]
0x716CAD: mov     large fs:0, eax
0x716CB3: mov     ebx, ecx
0x716CB5: push    10h; Size
0x716CB7: call    FormHeapAlloc
0x716CBC: mov     esi, eax
0x716CBE: add     esp, 4
0x716CC1: mov     [esp+1Ch+var_10], esi
0x716CC5: test    esi, esi
0x716CC7: mov     [esp+1Ch+var_4], 0
0x716CCF: jz      short loc_716CE7
0x716CD1: mov     ecx, esi
0x716CD3: call    sub_721350
0x716CD8: mov     dword ptr [esi], offset ??_7NiStringExtraData@@6B@; const NiStringExtraData::`vftable'
0x716CDE: mov     dword ptr [esi+0Ch], 0
0x716CE5: jmp     short loc_716CE9
0x716CE7: xor     esi, esi
0x716CE9: mov     eax, [esp+1Ch+arg_0]
0x716CED: push    eax
0x716CEE: push    esi
0x716CEF: mov     ecx, ebx
0x716CF1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x716CF9: call    sub_716AC0
0x716CFE: mov     eax, esi
0x716D00: mov     ecx, [esp+1Ch+var_C]
0x716D04: mov     large fs:0, ecx
0x716D0B: pop     ecx
0x716D0C: pop     esi
0x716D0D: pop     ebx
0x716D0E: add     esp, 10h
0x716D11: retn    4
