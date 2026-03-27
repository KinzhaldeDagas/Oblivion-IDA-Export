0x8C20C0: push    0FFFFFFFFh
0x8C20C2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x8C20C7: mov     eax, large fs:0
0x8C20CD: push    eax
0x8C20CE: push    ecx
0x8C20CF: push    ebp
0x8C20D0: push    esi
0x8C20D1: push    edi
0x8C20D2: mov     eax, ds:0B30AACh
0x8C20D7: xor     eax, esp
0x8C20D9: push    eax
0x8C20DA: lea     eax, [esp+20h+var_C]
0x8C20DE: mov     large fs:0, eax
0x8C20E4: mov     edi, ecx
0x8C20E6: push    offset stru_BA7C80; lpCriticalSection
0x8C20EB: call    dword ptr ds:0A2806Ch
0x8C20F1: call    dword ptr ds:0A2808Ch
0x8C20F7: mov     ebp, 1
0x8C20FC: add     ds:0BA7CFCh, ebp
0x8C2102: push    10h; Size
0x8C2104: mov     ds:0BA7CF8h, eax
0x8C2109: call    FormHeapAlloc
0x8C210E: mov     esi, eax
0x8C2110: add     esp, 4
0x8C2113: mov     [esp+20h+var_10], esi
0x8C2117: test    esi, esi
0x8C2119: mov     [esp+20h+var_4], 0
0x8C2121: jz      short loc_8C2157
0x8C2123: mov     ecx, esi; this
0x8C2125: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8C212A: mov     dword ptr [esi], offset ??_7bhkConstraint@@6B@; const bhkConstraint::`vftable'
0x8C2130: mov     dword ptr [esi+0Ch], 0
0x8C2137: add     ds:0BA7D4Ch, ebp
0x8C213D: mov     dword ptr [esi], offset ??_7bhkGenericConstraint@@6B@; const bhkGenericConstraint::`vftable'
0x8C2143: add     ds:0BA8354h, ebp
0x8C2149: mov     dword ptr [esi], offset ??_7bhkFixedConstraint@@6B@; const bhkFixedConstraint::`vftable'
0x8C214F: add     ds:0BA80D0h, ebp
0x8C2155: jmp     short loc_8C2159
0x8C2157: xor     esi, esi
0x8C2159: mov     eax, [esp+20h+arg_0]
0x8C215D: push    eax
0x8C215E: push    esi
0x8C215F: mov     ecx, edi
0x8C2161: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8C2169: call    sub_8A0860
0x8C216E: sub     ds:0BA7CFCh, ebp
0x8C2174: jnz     short loc_8C2180
0x8C2176: mov     dword ptr ds:0BA7CF8h, 0
0x8C2180: push    offset stru_BA7C80; lpCriticalSection
0x8C2185: call    dword ptr ds:0A28074h
0x8C218B: mov     eax, esi
0x8C218D: mov     ecx, [esp+20h+var_C]
0x8C2191: mov     large fs:0, ecx
0x8C2198: pop     ecx
0x8C2199: pop     edi
0x8C219A: pop     esi
0x8C219B: pop     ebp
0x8C219C: add     esp, 10h
0x8C219F: retn    4
