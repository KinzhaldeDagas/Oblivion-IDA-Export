0x495120: push    0FFFFFFFFh
0x495122: push    offset SEH_495120
0x495127: mov     eax, large fs:0
0x49512D: push    eax
0x49512E: sub     esp, 38h
0x495131: push    ebx
0x495132: push    ebp
0x495133: push    esi
0x495134: push    edi
0x495135: mov     eax, ds:0B30AACh
0x49513A: xor     eax, esp
0x49513C: push    eax
0x49513D: lea     eax, [esp+58h+var_C]
0x495141: mov     large fs:0, eax
0x495147: mov     [esp+58h+var_44], ecx
0x49514B: mov     ebp, [esp+58h+arg_4]
0x49514F: xor     edi, edi
0x495151: cmp     ebp, edi
0x495153: jz      loc_495254
0x495159: push    10h; Size
0x49515B: call    FormHeapAlloc
0x495160: mov     esi, eax
0x495162: add     esp, 4
0x495165: mov     [esp+58h+arg_4], esi
0x495169: cmp     esi, edi
0x49516B: mov     [esp+58h+var_4], edi
0x49516F: jz      short loc_4951AA
0x495171: mov     eax, 80h ; '€'
0x495176: xor     ecx, ecx
0x495178: mov     [esi+8], ax
0x49517C: mov     [esi+0Eh], ax
0x495180: mov     edx, 4
0x495185: mul     edx
0x495187: seto    cl
0x49518A: mov     dword ptr [esi], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x495190: mov     [esi+0Ah], di
0x495194: mov     [esi+0Ch], di
0x495198: neg     ecx
0x49519A: or      ecx, eax
0x49519C: push    ecx; Size
0x49519D: call    FormHeapAlloc
0x4951A2: add     esp, 4
0x4951A5: mov     [esi+4], eax
0x4951A8: jmp     short loc_4951AC
0x4951AA: xor     esi, esi
0x4951AC: mov     eax, [esp+58h+arg_0]
0x4951B0: mov     edx, [ebp+0]
0x4951B3: mov     [esp+58h+lParam], eax
0x4951B7: mov     eax, [edx+30h]
0x4951BA: push    esi
0x4951BB: mov     ecx, ebp
0x4951BD: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x4951C5: mov     [esp+5Ch+var_3C], 0FFFF0002h
0x4951CD: mov     [esp+5Ch+var_38], 27h ; '''
0x4951D5: mov     [esp+5Ch+var_14], ebp
0x4951D9: call    eax
0x4951DB: cmp     [esi+0Ah], di
0x4951DF: jbe     short loc_495225
0x4951E1: mov     ebx, ds:0A28290h
0x4951E7: mov     ebp, 6
0x4951EC: lea     esp, [esp+0]
0x4951F0: mov     ecx, [esi+4]
0x4951F3: mov     edx, [ecx+edi*4]
0x4951F6: mov     ecx, [esp+58h+var_44]
0x4951FA: lea     eax, [esp+58h+lParam]
0x4951FE: push    eax; lParam
0x4951FF: push    0; wParam
0x495201: mov     [esp+60h+var_28], edx
0x495205: mov     edx, [ecx+0Ch]
0x495208: push    1100h; Msg
0x49520D: push    edx; hWnd
0x49520E: mov     [esp+68h+var_20], ebp
0x495212: mov     [esp+68h+var_1C], ebp
0x495216: call    ebx ; SendMessageA
0x495218: movzx   eax, word ptr [esi+0Ah]
0x49521C: add     edi, 1
0x49521F: cmp     edi, eax
0x495221: jb      short loc_4951F0
0x495223: xor     edi, edi
0x495225: xor     eax, eax
0x495227: cmp     [esi+0Ah], di
0x49522B: jbe     short loc_495242
0x49522D: lea     ecx, [ecx+0]
0x495230: mov     edx, [esi+4]
0x495233: movzx   ecx, ax
0x495236: add     eax, 1
0x495239: mov     [edx+ecx*4], edi
0x49523C: cmp     ax, [esi+0Ah]
0x495240: jb      short loc_495230
0x495242: mov     [esi+0Ah], di
0x495246: mov     [esi+0Ch], di
0x49524A: mov     eax, [esi]
0x49524C: mov     edx, [eax]
0x49524E: push    1
0x495250: mov     ecx, esi
0x495252: call    edx
0x495254: mov     ecx, dword ptr [esp+58h+var_C]
0x495258: mov     large fs:0, ecx
0x49525F: pop     ecx
0x495260: pop     edi
0x495261: pop     esi
0x495262: pop     ebp
0x495263: pop     ebx
0x495264: add     esp, 44h
0x495267: retn    8
