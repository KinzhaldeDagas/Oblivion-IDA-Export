0x5E61B0: push    ecx
0x5E61B1: push    esi
0x5E61B2: mov     esi, ecx
0x5E61B4: mov     ecx, ds:0B3A6B0h
0x5E61BA: push    2
0x5E61BC: call    sub_572EA0
0x5E61C1: fcomp   dword ptr ds:0A2FAA8h
0x5E61C7: fnstsw  ax
0x5E61C9: test    ah, 41h
0x5E61CC: jz      loc_5E643E
0x5E61D2: mov     eax, [esi]
0x5E61D4: mov     edx, [eax+334h]
0x5E61DA: push    1
0x5E61DC: mov     ecx, esi
0x5E61DE: call    edx
0x5E61E0: test    al, al
0x5E61E2: jz      loc_5E6524
0x5E61E8: mov     eax, [esi]
0x5E61EA: mov     edx, [eax+330h]
0x5E61F0: mov     ecx, esi
0x5E61F2: call    edx
0x5E61F4: test    eax, eax
0x5E61F6: jz      loc_5E6524
0x5E61FC: cmp     dword ptr [esi+0B0h], 5
0x5E6203: jz      loc_5E6524
0x5E6209: mov     eax, [esi]
0x5E620B: mov     edx, [eax+330h]
0x5E6211: mov     ecx, esi
0x5E6213: call    edx
0x5E6215: mov     ecx, eax
0x5E6217: call    sub_6135F0
0x5E621C: test    eax, eax
0x5E621E: jz      loc_5E6524
0x5E6224: mov     eax, [esi]
0x5E6226: mov     edx, [eax+330h]
0x5E622C: mov     ecx, esi
0x5E622E: call    edx
0x5E6230: mov     ecx, eax
0x5E6232: call    sub_6135F0
0x5E6237: mov     ecx, ds:0B333C4h
0x5E623D: cmp     eax, ecx
0x5E623F: jnz     short loc_5E624E
0x5E6241: cmp     byte ptr [ecx+5C0h], 0
0x5E6248: jnz     loc_5E6524
0x5E624E: mov     ecx, [esi+58h]
0x5E6251: mov     eax, [ecx]
0x5E6253: mov     edx, [eax+8]
0x5E6256: push    ebx
0x5E6257: push    ebp
0x5E6258: push    edi
0x5E6259: or      edi, 0FFFFFFFFh
0x5E625C: call    edx
0x5E625E: mov     ebp, eax
0x5E6260: mov     eax, [esi]
0x5E6262: mov     edx, [eax+330h]
0x5E6268: mov     ecx, esi
0x5E626A: xor     ebx, ebx
0x5E626C: call    edx
0x5E626E: test    eax, eax
0x5E6270: jz      short loc_5E62E1
0x5E6272: mov     eax, [esi]
0x5E6274: mov     edx, [eax+330h]
0x5E627A: mov     ecx, esi
0x5E627C: call    edx
0x5E627E: mov     ecx, eax
0x5E6280: call    sub_6135F0
0x5E6285: test    eax, eax
0x5E6287: jz      short loc_5E62E1
0x5E6289: mov     eax, [esi]
0x5E628B: mov     edx, [eax+330h]
0x5E6291: mov     ecx, esi
0x5E6293: call    edx
0x5E6295: mov     ecx, eax
0x5E6297: call    sub_6135F0
0x5E629C: cmp     [eax+58h], ebx
0x5E629F: jz      short loc_5E62E1
0x5E62A1: mov     eax, [esi]
0x5E62A3: mov     edx, [eax+330h]
0x5E62A9: mov     ecx, esi
0x5E62AB: call    edx
0x5E62AD: mov     ecx, eax
0x5E62AF: call    sub_6135F0
0x5E62B4: mov     ecx, [eax+58h]
0x5E62B7: mov     eax, [ecx]
0x5E62B9: mov     edx, [eax+8]
0x5E62BC: call    edx
0x5E62BE: mov     edi, eax
0x5E62C0: mov     eax, [esi]
0x5E62C2: mov     edx, [eax+330h]
0x5E62C8: mov     ecx, esi
0x5E62CA: call    edx
0x5E62CC: mov     ecx, eax
0x5E62CE: call    sub_6135F0
0x5E62D3: mov     edx, [eax]
0x5E62D5: mov     ecx, eax
0x5E62D7: mov     eax, [edx+154h]
0x5E62DD: call    eax
0x5E62DF: mov     ebx, eax
0x5E62E1: mov     edx, [esi]
0x5E62E3: mov     eax, [edx+330h]
0x5E62E9: mov     ecx, esi
0x5E62EB: call    eax
0x5E62ED: mov     ecx, eax
0x5E62EF: call    sub_6135F0
0x5E62F4: test    eax, eax
0x5E62F6: jz      loc_5E64FE
0x5E62FC: mov     edx, [esi]
0x5E62FE: mov     eax, [edx+330h]
0x5E6304: mov     ecx, esi
0x5E6306: call    eax
0x5E6308: mov     ecx, eax
0x5E630A: call    sub_6135F0
0x5E630F: mov     edx, [eax]
0x5E6311: mov     ecx, eax
0x5E6313: mov     eax, [edx+198h]
0x5E6319: push    0
0x5E631B: call    eax
0x5E631D: test    al, al
0x5E631F: jnz     loc_5E64FE
0x5E6325: mov     edx, [esi]
0x5E6327: mov     eax, [edx+330h]
0x5E632D: mov     ecx, esi
0x5E632F: call    eax
0x5E6331: mov     ecx, eax
0x5E6333: call    sub_6135F0
0x5E6338: mov     ecx, [eax+8]
0x5E633B: shr     ecx, 0Bh
0x5E633E: test    cl, 1
0x5E6341: jnz     loc_5E64FE
0x5E6347: mov     edx, [esi]
0x5E6349: mov     eax, [edx+330h]
0x5E634F: mov     ecx, esi
0x5E6351: call    eax
0x5E6353: mov     ecx, eax
0x5E6355: call    sub_6135F0
0x5E635A: mov     ecx, [eax+8]
0x5E635D: shr     ecx, 5
0x5E6360: test    cl, 1
0x5E6363: jnz     loc_5E64FE
0x5E6369: mov     edx, [esi]
0x5E636B: mov     eax, [edx+338h]
0x5E6371: mov     ecx, esi
0x5E6373: call    eax
0x5E6375: mov     ecx, ds:0B333C4h
0x5E637B: cmp     eax, ecx
0x5E637D: jnz     short loc_5E6385
0x5E637F: push    esi
0x5E6380: call    sub_65DF40
0x5E6385: test    ebp, ebp
0x5E6387: jnz     loc_5E6443
0x5E638D: mov     edx, [esi]
0x5E638F: mov     eax, [edx+154h]
0x5E6395: mov     ecx, esi
0x5E6397: call    eax
0x5E6399: test    eax, eax
0x5E639B: jz      loc_5E6443
0x5E63A1: test    edi, edi
0x5E63A3: jnz     loc_5E6443
0x5E63A9: test    ebx, ebx
0x5E63AB: jz      loc_5E6443
0x5E63B1: mov     ebx, [esi+58h]
0x5E63B4: mov     edx, [esi]
0x5E63B6: mov     edi, [ebx]
0x5E63B8: mov     eax, [edx+330h]
0x5E63BE: mov     ecx, esi
0x5E63C0: add     edi, 48Ch
0x5E63C6: call    eax
0x5E63C8: mov     ecx, eax
0x5E63CA: call    sub_6135F0
0x5E63CF: mov     edx, [edi]
0x5E63D1: push    eax
0x5E63D2: mov     ecx, ebx
0x5E63D4: call    edx
0x5E63D6: fld     dword ptr [esi+0ACh]
0x5E63DC: fsub    dword ptr ds:0B33E9Ch
0x5E63E2: fstp    dword ptr [esp+10h]
0x5E63E6: fld     dword ptr [esp+10h]
0x5E63EA: fst     dword ptr [esi+0ACh]
0x5E63F0: fldz
0x5E63F2: fcompp
0x5E63F4: fnstsw  ax
0x5E63F6: test    ah, 1
0x5E63F9: jnz     short loc_5E641B
0x5E63FB: mov     eax, [esi]
0x5E63FD: mov     edx, [eax+330h]
0x5E6403: push    ebp
0x5E6404: mov     ecx, esi
0x5E6406: call    edx
0x5E6408: mov     ecx, eax
0x5E640A: call    sub_61E980
0x5E640F: fld     dword ptr ds:0A31E2Ch
0x5E6415: fstp    dword ptr [esi+0ACh]
0x5E641B: mov     eax, [esi]
0x5E641D: mov     edx, [eax+330h]
0x5E6423: mov     ecx, esi
0x5E6425: call    edx
0x5E6427: fld     [esp+10h+arg_4]
0x5E642B: mov     edx, [eax]
0x5E642D: push    ecx
0x5E642E: mov     ecx, eax
0x5E6430: fstp    [esp+14h+var_14]
0x5E6433: mov     eax, [edx+0ECh]
0x5E6439: call    eax
0x5E643B: pop     edi
0x5E643C: pop     ebp
0x5E643D: pop     ebx
0x5E643E: pop     esi
0x5E643F: pop     ecx
0x5E6440: retn    4
0x5E6443: mov     edx, [esi]
0x5E6445: mov     eax, [edx+330h]
0x5E644B: mov     ecx, esi
0x5E644D: call    eax
0x5E644F: test    eax, eax
0x5E6451: jz      short loc_5E643B
0x5E6453: mov     edx, [esi]
0x5E6455: mov     eax, [edx+330h]
0x5E645B: mov     ecx, esi
0x5E645D: call    eax
0x5E645F: mov     ecx, eax
0x5E6461: call    sub_6135F0
0x5E6466: test    eax, eax
0x5E6468: jz      short loc_5E643B
0x5E646A: mov     edx, [esi]
0x5E646C: mov     eax, [edx+330h]
0x5E6472: mov     ecx, esi
0x5E6474: call    eax
0x5E6476: mov     ecx, eax
0x5E6478: call    sub_6135F0
0x5E647D: mov     ecx, [eax+58h]
0x5E6480: mov     edx, [ecx]
0x5E6482: mov     eax, [edx+8]
0x5E6485: call    eax
0x5E6487: mov     ecx, [esi+58h]
0x5E648A: mov     edx, [ecx]
0x5E648C: mov     edi, eax
0x5E648E: mov     eax, [edx+8]
0x5E6491: call    eax
0x5E6493: cmp     eax, edi
0x5E6495: jz      short loc_5E643B
0x5E6497: mov     ecx, [esi+58h]
0x5E649A: mov     edx, [ecx]
0x5E649C: mov     eax, [edx+178h]
0x5E64A2: push    0
0x5E64A4: call    eax
0x5E64A6: mov     ecx, [esi+58h]
0x5E64A9: mov     edx, [ecx]
0x5E64AB: mov     eax, [edx+198h]
0x5E64B1: push    1
0x5E64B3: push    201h
0x5E64B8: push    0
0x5E64BA: push    esi
0x5E64BB: call    eax
0x5E64BD: mov     ecx, [esi+58h]
0x5E64C0: mov     edx, [ecx]
0x5E64C2: mov     eax, [edx+20h]
0x5E64C5: call    eax
0x5E64C7: mov     ecx, esi; this
0x5E64C9: call    Actor__GetProcessLevel
0x5E64CE: cmp     eax, 1
0x5E64D1: jnz     loc_5E643B
0x5E64D7: push    eax
0x5E64D8: push    esi
0x5E64D9: mov     ecx, offset ActorProcessManager_ptr
0x5E64DE: call    sub_674550
0x5E64E3: push    0
0x5E64E5: push    0
0x5E64E7: push    1
0x5E64E9: push    1
0x5E64EB: push    esi
0x5E64EC: mov     ecx, offset ActorProcessManager_ptr
0x5E64F1: call    sub_673A90
0x5E64F6: pop     edi
0x5E64F7: pop     ebp
0x5E64F8: pop     ebx
0x5E64F9: pop     esi
0x5E64FA: pop     ecx
0x5E64FB: retn    4
0x5E64FE: mov     edi, [esi]
0x5E6500: mov     edx, [edi+330h]
0x5E6506: mov     ecx, esi
0x5E6508: call    edx
0x5E650A: mov     ecx, eax
0x5E650C: call    sub_6135F0
0x5E6511: push    eax
0x5E6512: mov     eax, [edi+340h]
0x5E6518: mov     ecx, esi
0x5E651A: call    eax
0x5E651C: pop     edi
0x5E651D: pop     ebp
0x5E651E: pop     ebx
0x5E651F: pop     esi
0x5E6520: pop     ecx
0x5E6521: retn    4
0x5E6524: mov     edx, [esi]
0x5E6526: mov     eax, [edx+330h]
0x5E652C: mov     ecx, esi
0x5E652E: call    eax
0x5E6530: test    eax, eax
0x5E6532: jz      loc_5E643E
0x5E6538: mov     edx, [esi]
0x5E653A: mov     eax, [edx+330h]
0x5E6540: mov     ecx, esi
0x5E6542: call    eax
0x5E6544: mov     ecx, eax
0x5E6546: call    sub_6135F0
0x5E654B: test    eax, eax
0x5E654D: jnz     loc_5E643E
0x5E6553: mov     edx, [esi]
0x5E6555: push    eax
0x5E6556: mov     eax, [edx+340h]
0x5E655C: mov     ecx, esi
0x5E655E: call    eax
0x5E6560: pop     esi
0x5E6561: pop     ecx
0x5E6562: retn    4
