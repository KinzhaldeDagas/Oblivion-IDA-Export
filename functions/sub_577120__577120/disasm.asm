0x577120: mov     al, [esp+arg_0]
0x577124: push    esi
0x577125: mov     esi, ecx
0x577127: cmp     dword ptr [esi+1Ch], 0
0x57712B: mov     [esi+4], al
0x57712E: jz      short loc_577138
0x577130: mov     ecx, [esi+1Ch]
0x577133: cmp     byte ptr [ecx], 0
0x577136: jnz     short loc_5771B1
0x577138: push    edi
0x577139: mov     edi, [esi]
0x57713B: call    FontManager_GetSingleton
0x577140: fldz
0x577142: mov     edx, [eax+edi*4]
0x577145: movzx   eax, byte ptr [esi+4]
0x577149: mov     edx, [edx+38h]
0x57714C: lea     ecx, ds:0[eax*8]
0x577153: sub     ecx, eax
0x577155: lea     ecx, [edx+ecx*8+128h]
0x57715C: fcomp   dword ptr [ecx+24h]
0x57715F: fnstsw  ax
0x577161: test    ah, 44h
0x577164: jnp     short loc_57716E
0x577166: fld     dword ptr [ecx+30h]
0x577169: fadd    dword ptr [ecx+2Ch]
0x57716C: jmp     short loc_577170
0x57716E: fldz
0x577170: fadd    dword ptr [ecx+24h]
0x577173: call    Double_To_SInt32
0x577178: mov     edi, [esi]
0x57717A: mov     [esi+24h], eax
0x57717D: call    FontManager_GetSingleton
0x577182: mov     eax, [eax+edi*4]
0x577185: mov     ecx, [eax+38h]
0x577188: fld     dword ptr [ecx]
0x57718A: call    Double_To_SInt32
0x57718F: mov     edi, [esi]
0x577191: mov     [esi+28h], eax
0x577194: call    FontManager_GetSingleton
0x577199: mov     edx, [eax+edi*4]
0x57719C: fld     dword ptr [edx+30h]
0x57719F: fchs
0x5771A1: call    Double_To_SInt32
0x5771A6: mov     [esi+2Ch], eax
0x5771A9: mov     dword ptr [esi+30h], 0
0x5771B0: pop     edi
0x5771B1: mov     dword ptr [esi+34h], 0
0x5771B8: pop     esi
0x5771B9: retn    4
