0x531FC0: push    0FFFFFFFFh
0x531FC2: push    offset SEH_531FC0
0x531FC7: mov     eax, large fs:0
0x531FCD: push    eax
0x531FCE: push    ecx
0x531FCF: push    ebx
0x531FD0: push    esi
0x531FD1: push    edi
0x531FD2: mov     eax, ds:0B30AACh
0x531FD7: xor     eax, esp
0x531FD9: push    eax
0x531FDA: lea     eax, [esp+20h+var_C]
0x531FDE: mov     large fs:0, eax
0x531FE4: mov     esi, ecx
0x531FE6: mov     [esp+20h+var_10], esi
0x531FEA: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x531FEF: xor     ebx, ebx
0x531FF1: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x531FF7: mov     edi, 1
0x531FFC: mov     [esi+0Ch], ebx
0x531FFF: add     ds:0BA7D34h, edi
0x532005: mov     dword ptr [esi], offset ??_7bhkPhantom@@6B@; const bhkPhantom::`vftable'
0x53200B: add     ds:0BA7F5Ch, edi
0x532011: mov     [esi+10h], bl
0x532014: mov     dword ptr [esi], offset ??_7bhkShapePhantom@@6B@; const bhkShapePhantom::`vftable'
0x53201A: add     ds:0BA7F68h, edi
0x532020: mov     [esi+10h], bl
0x532023: mov     eax, [esp+20h+arg_0]
0x532027: push    eax
0x532028: mov     ecx, esi
0x53202A: mov     [esp+24h+var_4], ebx
0x53202E: mov     dword ptr [esi], offset ??_7bhkSimpleShapePhantom@@6B@; const bhkSimpleShapePhantom::`vftable'
0x532034: call    sub_8AF1A0
0x532039: add     ds:0BA7F74h, edi
0x53203F: mov     [esi+10h], bl
0x532042: mov     eax, esi
0x532044: mov     ecx, [esp+20h+var_C]
0x532048: mov     large fs:0, ecx
0x53204F: pop     ecx
0x532050: pop     edi
0x532051: pop     esi
0x532052: pop     ebx
0x532053: add     esp, 10h
0x532056: retn    4
