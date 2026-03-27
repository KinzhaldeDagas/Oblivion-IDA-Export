0x71C0B0: push    0FFFFFFFFh
0x71C0B2: push    offset SEH_71C0B0
0x71C0B7: mov     eax, large fs:0
0x71C0BD: push    eax
0x71C0BE: sub     esp, 20h
0x71C0C1: push    ebx
0x71C0C2: push    ebp
0x71C0C3: push    esi
0x71C0C4: push    edi
0x71C0C5: mov     eax, ds:0B30AACh
0x71C0CA: xor     eax, esp
0x71C0CC: push    eax
0x71C0CD: lea     eax, [esp+40h+var_C]
0x71C0D1: mov     large fs:0, eax
0x71C0D7: mov     ebx, [esp+40h+arg_0]
0x71C0DB: mov     ecx, [ebx+58h]
0x71C0DE: mov     eax, [ebx+54h]
0x71C0E1: mov     edi, [ecx]
0x71C0E3: mov     edx, [ebx+60h]
0x71C0E6: mov     esi, [eax]
0x71C0E8: lea     ebp, [ebx+8]
0x71C0EB: push    offset unk_B25E00
0x71C0F0: mov     ecx, ebp
0x71C0F2: mov     [esp+44h+var_2C], edx
0x71C0F6: call    sub_71AD40
0x71C0FB: test    al, al
0x71C0FD: jz      loc_71C1AE
0x71C103: push    70h ; 'p'; Size
0x71C105: call    FormHeapAlloc
0x71C10A: add     esp, 4
0x71C10D: mov     [esp+40h+arg_4], eax
0x71C111: xor     ebp, ebp
0x71C113: cmp     eax, ebp
0x71C115: mov     [esp+40h+var_4], ebp
0x71C119: jz      short loc_71C132
0x71C11B: mov     ecx, [esp+40h+var_2C]
0x71C11F: push    1
0x71C121: push    ecx
0x71C122: push    offset unk_B25F68
0x71C127: push    edi
0x71C128: push    esi
0x71C129: mov     ecx, eax
0x71C12B: call    NiPixelData__NiPixelData
0x71C130: mov     ebp, eax
0x71C132: xor     esi, esi
0x71C134: cmp     [esp+40h+var_2C], esi
0x71C138: mov     [esp+40h+var_20], ebp
0x71C13C: jbe     short loc_71C1A0
0x71C13E: mov     edi, edi
0x71C140: mov     eax, [ebx+54h]
0x71C143: mov     ecx, [ebx+58h]
0x71C146: mov     edi, [eax+esi*4]
0x71C149: mov     eax, [ecx+esi*4]
0x71C14C: mov     edx, [ebp+5Ch]
0x71C14F: mov     ecx, [ebx+5Ch]
0x71C152: mov     edx, [edx+esi*4]
0x71C155: mov     ecx, [ecx+esi*4]
0x71C158: add     edx, [ebp+50h]
0x71C15B: add     ecx, [ebx+50h]
0x71C15E: test    eax, eax
0x71C160: mov     [esp+40h+arg_4], edi
0x71C164: jbe     short loc_71C197
0x71C166: mov     [esp+40h+var_1C], eax
0x71C16A: lea     ebx, [ebx+0]
0x71C170: test    edi, edi
0x71C172: jbe     short loc_71C190
0x71C174: movzx   eax, byte ptr [ecx+3]
0x71C178: mov     [edx+2], al
0x71C17B: movzx   eax, byte ptr [ecx]
0x71C17E: mov     [edx+3], al
0x71C181: add     ecx, 4
0x71C184: add     edx, 4
0x71C187: sub     edi, 1
0x71C18A: jnz     short loc_71C174
0x71C18C: mov     edi, [esp+40h+arg_4]
0x71C190: sub     [esp+40h+var_1C], 1
0x71C195: jnz     short loc_71C170
0x71C197: add     esi, 1
0x71C19A: cmp     esi, [esp+40h+var_2C]
0x71C19E: jb      short loc_71C140
0x71C1A0: mov     esi, 4
0x71C1A5: mov     [esp+40h+var_28], esi
0x71C1A9: jmp     loc_71C2DB
0x71C1AE: push    offset unk_B25E48
0x71C1B3: mov     ecx, ebp
0x71C1B5: call    sub_71AD40
0x71C1BA: test    al, al
0x71C1BC: jz      loc_71C286
0x71C1C2: mov     ecx, [esp+40h+arg_4]
0x71C1C6: push    offset unk_B25F68
0x71C1CB: call    sub_71AD40
0x71C1D0: test    al, al
0x71C1D2: jz      loc_71C286
0x71C1D8: push    70h ; 'p'; Size
0x71C1DA: call    FormHeapAlloc
0x71C1DF: add     esp, 4
0x71C1E2: mov     [esp+40h+arg_4], eax
0x71C1E6: test    eax, eax
0x71C1E8: mov     [esp+40h+var_4], 1
0x71C1F0: jz      short loc_71C20B
0x71C1F2: mov     ecx, [esp+40h+var_2C]
0x71C1F6: push    1
0x71C1F8: push    ecx
0x71C1F9: push    offset unk_B25F68
0x71C1FE: push    edi
0x71C1FF: push    esi
0x71C200: mov     ecx, eax
0x71C202: call    NiPixelData__NiPixelData
0x71C207: mov     ebp, eax
0x71C209: jmp     short loc_71C20D
0x71C20B: xor     ebp, ebp
0x71C20D: xor     edi, edi
0x71C20F: cmp     [esp+40h+var_2C], edi
0x71C213: mov     [esp+40h+var_20], ebp
0x71C217: jbe     short loc_71C27C
0x71C219: lea     esp, [esp+0]
0x71C220: mov     edx, [ebp+5Ch]
0x71C223: mov     ecx, [edx+edi*4]
0x71C226: mov     eax, [ebx+54h]
0x71C229: mov     edx, [ebx+58h]
0x71C22C: mov     esi, [eax+edi*4]
0x71C22F: mov     eax, [edx+edi*4]
0x71C232: mov     edx, [ebx+5Ch]
0x71C235: mov     edx, [edx+edi*4]
0x71C238: add     ecx, [ebp+50h]
0x71C23B: add     edx, [ebx+50h]
0x71C23E: test    eax, eax
0x71C240: mov     [esp+40h+arg_4], esi
0x71C244: jbe     short loc_71C273
0x71C246: mov     [esp+40h+var_1C], eax
0x71C24A: lea     ebx, [ebx+0]
0x71C250: test    esi, esi
0x71C252: jbe     short loc_71C26C
0x71C254: mov     byte ptr [ecx+2], 0FFh
0x71C258: mov     al, [edx]
0x71C25A: mov     [ecx+3], al
0x71C25D: add     edx, 3
0x71C260: add     ecx, 4
0x71C263: sub     esi, 1
0x71C266: jnz     short loc_71C254
0x71C268: mov     esi, [esp+40h+arg_4]
0x71C26C: sub     [esp+40h+var_1C], 1
0x71C271: jnz     short loc_71C250
0x71C273: add     edi, 1
0x71C276: cmp     edi, [esp+40h+var_2C]
0x71C27A: jb      short loc_71C220
0x71C27C: mov     [esp+40h+var_28], 4
0x71C284: jmp     short loc_71C2D6
0x71C286: push    offset unk_B25E48
0x71C28B: mov     ecx, ebp
0x71C28D: call    sub_71AD40
0x71C292: test    al, al
0x71C294: jz      loc_71C475
0x71C29A: push    70h ; 'p'; Size
0x71C29C: call    FormHeapAlloc
0x71C2A1: add     esp, 4
0x71C2A4: mov     [esp+40h+arg_4], eax
0x71C2A8: test    eax, eax
0x71C2AA: mov     ebp, 2
0x71C2AF: mov     [esp+40h+var_4], ebp
0x71C2B3: jz      short loc_71C2CC
0x71C2B5: mov     ecx, [esp+40h+var_2C]
0x71C2B9: push    1
0x71C2BB: push    ecx
0x71C2BC: push    offset unk_B25F20
0x71C2C1: push    edi
0x71C2C2: push    esi
0x71C2C3: mov     ecx, eax
0x71C2C5: call    NiPixelData__NiPixelData
0x71C2CA: jmp     short loc_71C2CE
0x71C2CC: xor     eax, eax
0x71C2CE: mov     [esp+40h+var_20], eax
0x71C2D2: mov     [esp+40h+var_28], ebp
0x71C2D6: mov     esi, 3
0x71C2DB: xor     edx, edx
0x71C2DD: cmp     [esp+40h+var_2C], edx
0x71C2E1: mov     [esp+40h+var_24], edx
0x71C2E5: jbe     loc_71C46F
0x71C2EB: jmp     short loc_71C2F8
0x71C2ED: align 10h
0x71C2F0: mov     ebx, [esp+40h+arg_0]
0x71C2F4: mov     edx, [esp+40h+var_24]
0x71C2F8: mov     eax, [esp+40h+var_20]
0x71C2FC: mov     ecx, [eax+5Ch]
0x71C2FF: mov     ecx, [ecx+edx*4]
0x71C302: add     ecx, [eax+50h]
0x71C305: mov     eax, [ebx+54h]
0x71C308: mov     eax, [eax+edx*4]
0x71C30B: mov     edi, [ebx+5Ch]
0x71C30E: mov     edi, [edi+edx*4]
0x71C311: add     edi, [ebx+50h]
0x71C314: mov     ebp, esi
0x71C316: imul    ebp, eax
0x71C319: sub     eax, 1
0x71C31C: mov     [esp+40h+arg_4], eax
0x71C320: mov     eax, [ebx+58h]
0x71C323: mov     ebx, [esp+40h+var_24]
0x71C327: mov     eax, [eax+ebx*4]
0x71C32A: add     ebp, edi
0x71C32C: sub     eax, 1
0x71C32F: lea     edx, [edi+esi]
0x71C332: mov     [esp+40h+var_1C], 0
0x71C33A: jz      loc_71C3CA
0x71C340: mov     [esp+40h+var_14], eax
0x71C344: mov     [esp+40h+var_1C], eax
0x71C348: mov     eax, [esp+40h+arg_4]
0x71C34C: lea     esp, [esp+0]
0x71C350: test    eax, eax
0x71C352: jbe     short loc_71C3AC
0x71C354: mov     [esp+40h+var_18], eax
0x71C358: jmp     short loc_71C360
0x71C35A: align 10h
0x71C360: movzx   ax, byte ptr [edi]
0x71C364: movzx   bx, byte ptr [ebp+0]
0x71C369: movzx   eax, ax
0x71C36C: sub     bx, ax
0x71C36F: movzx   ebx, bx
0x71C372: mov     [esp+40h+var_10], ebx
0x71C376: mov     bl, [edx]
0x71C378: sub     bl, al
0x71C37A: mov     al, byte ptr [esp+40h+var_10]
0x71C37E: mov     [ecx], bl
0x71C380: mov     [ecx+1], al
0x71C383: add     ecx, [esp+40h+var_28]
0x71C387: add     edi, esi
0x71C389: add     edx, esi
0x71C38B: add     ebp, esi
0x71C38D: sub     [esp+40h+var_18], 1
0x71C392: jnz     short loc_71C360
0x71C394: mov     eax, [esp+40h+arg_4]
0x71C398: test    eax, eax
0x71C39A: jz      short loc_71C3AC
0x71C39C: mov     bl, [edi]
0x71C39E: mov     eax, edi
0x71C3A0: sub     eax, esi
0x71C3A2: sub     bl, [eax]
0x71C3A4: mov     eax, [esp+40h+arg_4]
0x71C3A8: mov     [ecx], bl
0x71C3AA: jmp     short loc_71C3AF
0x71C3AC: mov     byte ptr [ecx], 0
0x71C3AF: mov     bl, [ebp+0]
0x71C3B2: sub     bl, [edi]
0x71C3B4: add     edi, esi
0x71C3B6: mov     [ecx+1], bl
0x71C3B9: add     ecx, [esp+40h+var_28]
0x71C3BD: add     edx, esi
0x71C3BF: add     ebp, esi
0x71C3C1: sub     [esp+40h+var_14], 1
0x71C3C6: jnz     short loc_71C350
0x71C3C8: jmp     short loc_71C3CE
0x71C3CA: mov     eax, [esp+40h+arg_4]
0x71C3CE: lea     ebp, [eax+1]
0x71C3D1: imul    ebp, esi
0x71C3D4: mov     ebx, edi
0x71C3D6: sub     ebx, ebp
0x71C3D8: test    eax, eax
0x71C3DA: mov     [esp+40h+var_14], ebx
0x71C3DE: jbe     short loc_71C443
0x71C3E0: mov     [esp+40h+var_18], eax
0x71C3E4: movzx   ax, byte ptr [edi]
0x71C3E8: movzx   bx, byte ptr [ebx]
0x71C3EC: movzx   eax, ax
0x71C3EF: mov     bp, ax
0x71C3F2: sub     bp, bx
0x71C3F5: movzx   ebx, bp
0x71C3F8: mov     [esp+40h+var_10], ebx
0x71C3FC: mov     bl, [edx]
0x71C3FE: sub     bl, al
0x71C400: mov     al, byte ptr [esp+40h+var_10]
0x71C404: mov     [ecx], bl
0x71C406: mov     ebx, [esp+40h+var_14]
0x71C40A: mov     [ecx+1], al
0x71C40D: add     ecx, [esp+40h+var_28]
0x71C411: add     ebx, esi
0x71C413: add     edi, esi
0x71C415: add     edx, esi
0x71C417: sub     [esp+40h+var_18], 1
0x71C41C: mov     [esp+40h+var_14], ebx
0x71C420: jnz     short loc_71C3E4
0x71C422: cmp     [esp+40h+arg_4], 0
0x71C427: jz      short loc_71C443
0x71C429: mov     al, [edi]
0x71C42B: mov     edx, edi
0x71C42D: sub     edx, esi
0x71C42F: sub     al, [edx]
0x71C431: cmp     [esp+40h+var_1C], 0
0x71C436: mov     [ecx], al
0x71C438: jz      short loc_71C456
0x71C43A: mov     dl, [edi]
0x71C43C: sub     dl, [ebx]
0x71C43E: mov     [ecx+1], dl
0x71C441: jmp     short loc_71C45A
0x71C443: cmp     [esp+40h+var_1C], 0
0x71C448: mov     byte ptr [ecx], 0
0x71C44B: jz      short loc_71C456
0x71C44D: mov     al, [edi]
0x71C44F: sub     al, [ebx]
0x71C451: mov     [ecx+1], al
0x71C454: jmp     short loc_71C45A
0x71C456: mov     byte ptr [ecx+1], 0
0x71C45A: mov     eax, [esp+40h+var_24]
0x71C45E: add     eax, 1
0x71C461: cmp     eax, [esp+40h+var_2C]
0x71C465: mov     [esp+40h+var_24], eax
0x71C469: jb      loc_71C2F0
0x71C46F: mov     eax, [esp+40h+var_20]
0x71C473: jmp     short loc_71C477
0x71C475: xor     eax, eax
0x71C477: mov     ecx, [esp+40h+var_C]
0x71C47B: mov     large fs:0, ecx
0x71C482: pop     ecx
0x71C483: pop     edi
0x71C484: pop     esi
0x71C485: pop     ebp
0x71C486: pop     ebx
0x71C487: add     esp, 2Ch
0x71C48A: retn    8
