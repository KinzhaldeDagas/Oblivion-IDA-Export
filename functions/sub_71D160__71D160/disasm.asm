0x71D160: sub     esp, 22Ch
0x71D166: mov     eax, ds:0B30AACh
0x71D16B: xor     eax, esp
0x71D16D: mov     [esp+22Ch+var_4], eax
0x71D174: push    ebx
0x71D175: push    ebp
0x71D176: push    esi
0x71D177: push    edi
0x71D178: mov     eax, [esp+23Ch+arg_C]
0x71D17F: mov     ecx, [esp+23Ch+arg_10]
0x71D186: mov     [esp+23Ch+var_208], eax
0x71D18A: mov     eax, [esp+23Ch+arg_14]
0x71D191: mov     ebp, [ecx+14h]
0x71D194: movzx   ecx, word ptr [eax+0Ch]
0x71D198: mov     [esp+23Ch+var_21C], ecx
0x71D19C: movzx   ecx, byte ptr [eax+16h]
0x71D1A0: mov     [esp+23Ch+var_22B], cl
0x71D1A4: movzx   ecx, byte ptr [eax+12h]
0x71D1A8: mov     dl, [eax+17h]
0x71D1AB: mov     [esp+23Ch+var_20C], ecx
0x71D1AF: movzx   ecx, word ptr [eax+8]
0x71D1B3: mov     [esp+23Ch+var_220], ecx
0x71D1B7: movzx   ecx, byte ptr [eax+15h]
0x71D1BB: mov     [esp+23Ch+var_22A], cl
0x71D1BF: movzx   ecx, byte ptr [eax+11h]
0x71D1C3: mov     [esp+23Ch+var_224], ecx
0x71D1C7: movzx   ecx, word ptr [eax+4]
0x71D1CB: mov     [esp+23Ch+var_218], ecx
0x71D1CF: movzx   ecx, byte ptr [eax+14h]
0x71D1D3: movzx   edi, byte ptr [eax+13h]
0x71D1D7: mov     [esp+23Ch+var_229], cl
0x71D1DB: movzx   ecx, byte ptr [eax+10h]
0x71D1DF: movzx   eax, word ptr [eax]
0x71D1E2: mov     [esp+23Ch+var_214], eax
0x71D1E6: xor     esi, esi
0x71D1E8: mov     [esp+23Ch+var_210], ecx
0x71D1EC: lea     eax, [ebp+2]
0x71D1EF: nop
0x71D1F0: movzx   ebx, byte ptr [eax-2]
0x71D1F4: movzx   ecx, [esp+23Ch+var_229]
0x71D1F9: shr     bl, cl
0x71D1FB: mov     ecx, [esp+23Ch+var_210]
0x71D1FF: mov     [esp+23Ch+var_228], edx
0x71D203: movzx   bx, bl
0x71D207: shl     bx, cl
0x71D20A: movzx   ecx, byte ptr [eax-1]
0x71D20E: movzx   edx, cl
0x71D211: movzx   ecx, [esp+23Ch+var_22A]
0x71D216: shr     dl, cl
0x71D218: mov     ecx, [esp+23Ch+var_224]
0x71D21C: and     bx, word ptr [esp+23Ch+var_214]
0x71D221: movzx   bp, dl
0x71D225: shl     bp, cl
0x71D228: movzx   ecx, byte ptr [eax+1]
0x71D22C: and     bp, word ptr [esp+23Ch+var_218]
0x71D231: mov     edx, [esp+23Ch+var_228]
0x71D235: mov     [esp+23Ch+var_22C], cl
0x71D239: or      bx, bp
0x71D23C: mov     cl, dl
0x71D23E: mov     [esp+23Ch+var_228], edx
0x71D242: movzx   edx, [esp+23Ch+var_22C]
0x71D247: shr     dl, cl
0x71D249: mov     ecx, edi
0x71D24B: movzx   bp, dl
0x71D24F: shl     bp, cl
0x71D252: movzx   ecx, byte ptr [eax]
0x71D255: and     bp, word ptr [esp+23Ch+var_21C]
0x71D25A: movzx   edx, cl
0x71D25D: movzx   ecx, [esp+23Ch+var_22B]
0x71D262: shr     dl, cl
0x71D264: mov     ecx, [esp+23Ch+var_20C]
0x71D268: or      bx, bp
0x71D26B: movzx   bp, dl
0x71D26F: shl     bp, cl
0x71D272: movzx   ecx, [esp+23Ch+var_229]
0x71D277: and     bp, word ptr [esp+23Ch+var_220]
0x71D27C: or      bx, bp
0x71D27F: mov     [esp+esi*2+23Ch+var_204], bx
0x71D284: movzx   ebx, byte ptr [eax+2]
0x71D288: shr     bl, cl
0x71D28A: mov     ecx, [esp+23Ch+var_210]
0x71D28E: movzx   bx, bl
0x71D292: shl     bx, cl
0x71D295: movzx   ecx, byte ptr [eax+3]
0x71D299: movzx   edx, cl
0x71D29C: movzx   ecx, [esp+23Ch+var_22A]
0x71D2A1: and     bx, word ptr [esp+23Ch+var_214]
0x71D2A6: shr     dl, cl
0x71D2A8: mov     ecx, [esp+23Ch+var_224]
0x71D2AC: movzx   bp, dl
0x71D2B0: shl     bp, cl
0x71D2B3: movzx   ecx, byte ptr [eax+4]
0x71D2B7: and     bp, word ptr [esp+23Ch+var_218]
0x71D2BC: movzx   edx, cl
0x71D2BF: movzx   ecx, [esp+23Ch+var_22B]
0x71D2C4: shr     dl, cl
0x71D2C6: mov     ecx, [esp+23Ch+var_20C]
0x71D2CA: or      bx, bp
0x71D2CD: movzx   bp, dl
0x71D2D1: mov     edx, [esp+23Ch+var_228]
0x71D2D5: shl     bp, cl
0x71D2D8: movzx   ecx, byte ptr [eax+5]
0x71D2DC: and     bp, word ptr [esp+23Ch+var_220]
0x71D2E1: mov     [esp+23Ch+var_22C], cl
0x71D2E5: mov     cl, dl
0x71D2E7: mov     [esp+23Ch+var_228], edx
0x71D2EB: movzx   edx, [esp+23Ch+var_22C]
0x71D2F0: shr     dl, cl
0x71D2F2: or      bx, bp
0x71D2F5: mov     ecx, edi
0x71D2F7: movzx   bp, dl
0x71D2FB: shl     bp, cl
0x71D2FE: and     bp, word ptr [esp+23Ch+var_21C]
0x71D303: or      bx, bp
0x71D306: mov     [esp+esi*2+23Ch+var_202], bx
0x71D30B: movzx   ebx, byte ptr [eax+6]
0x71D30F: movzx   ecx, [esp+23Ch+var_229]
0x71D314: shr     bl, cl
0x71D316: mov     ecx, [esp+23Ch+var_210]
0x71D31A: movzx   bx, bl
0x71D31E: shl     bx, cl
0x71D321: movzx   ecx, byte ptr [eax+7]
0x71D325: movzx   edx, cl
0x71D328: movzx   ecx, [esp+23Ch+var_22A]
0x71D32D: shr     dl, cl
0x71D32F: mov     ecx, [esp+23Ch+var_224]
0x71D333: and     bx, word ptr [esp+23Ch+var_214]
0x71D338: movzx   bp, dl
0x71D33C: shl     bp, cl
0x71D33F: movzx   ecx, byte ptr [eax+8]
0x71D343: and     bp, word ptr [esp+23Ch+var_218]
0x71D348: movzx   edx, cl
0x71D34B: movzx   ecx, [esp+23Ch+var_22B]
0x71D350: shr     dl, cl
0x71D352: mov     ecx, [esp+23Ch+var_20C]
0x71D356: or      bx, bp
0x71D359: movzx   bp, dl
0x71D35D: mov     edx, [esp+23Ch+var_228]
0x71D361: shl     bp, cl
0x71D364: movzx   ecx, byte ptr [eax+9]
0x71D368: and     bp, word ptr [esp+23Ch+var_220]
0x71D36D: mov     [esp+23Ch+var_22C], cl
0x71D371: or      bx, bp
0x71D374: mov     cl, dl
0x71D376: mov     [esp+23Ch+var_228], edx
0x71D37A: movzx   edx, [esp+23Ch+var_22C]
0x71D37F: shr     dl, cl
0x71D381: mov     ecx, edi
0x71D383: movzx   bp, dl
0x71D387: shl     bp, cl
0x71D38A: movzx   ecx, [esp+23Ch+var_229]
0x71D38F: and     bp, word ptr [esp+23Ch+var_21C]
0x71D394: or      bx, bp
0x71D397: mov     [esp+esi*2+23Ch+var_200], bx
0x71D39C: movzx   ebx, byte ptr [eax+0Ah]
0x71D3A0: shr     bl, cl
0x71D3A2: mov     ecx, [esp+23Ch+var_210]
0x71D3A6: movzx   bx, bl
0x71D3AA: shl     bx, cl
0x71D3AD: movzx   ecx, byte ptr [eax+0Bh]
0x71D3B1: movzx   edx, cl
0x71D3B4: movzx   ecx, [esp+23Ch+var_22A]
0x71D3B9: and     bx, word ptr [esp+23Ch+var_214]
0x71D3BE: shr     dl, cl
0x71D3C0: mov     ecx, [esp+23Ch+var_224]
0x71D3C4: movzx   bp, dl
0x71D3C8: shl     bp, cl
0x71D3CB: movzx   ecx, byte ptr [eax+0Ch]
0x71D3CF: and     bp, word ptr [esp+23Ch+var_218]
0x71D3D4: movzx   edx, cl
0x71D3D7: movzx   ecx, [esp+23Ch+var_22B]
0x71D3DC: shr     dl, cl
0x71D3DE: mov     ecx, [esp+23Ch+var_20C]
0x71D3E2: or      bx, bp
0x71D3E5: movzx   bp, dl
0x71D3E9: mov     edx, [esp+23Ch+var_228]
0x71D3ED: shl     bp, cl
0x71D3F0: movzx   ecx, byte ptr [eax+0Dh]
0x71D3F4: and     bp, word ptr [esp+23Ch+var_220]
0x71D3F9: mov     [esp+23Ch+var_22C], cl
0x71D3FD: mov     cl, dl
0x71D3FF: mov     [esp+23Ch+var_228], edx
0x71D403: movzx   edx, [esp+23Ch+var_22C]
0x71D408: shr     dl, cl
0x71D40A: or      bx, bp
0x71D40D: mov     ecx, edi
0x71D40F: movzx   bp, dl
0x71D413: shl     bp, cl
0x71D416: and     bp, word ptr [esp+23Ch+var_21C]
0x71D41B: or      bx, bp
0x71D41E: mov     [esp+esi*2+23Ch+var_1FE], bx
0x71D423: add     esi, 4
0x71D426: mov     edx, [esp+23Ch+var_228]
0x71D42A: add     eax, 10h
0x71D42D: cmp     esi, 100h
0x71D433: jb      loc_71D1F0
0x71D439: mov     ecx, [esp+23Ch+arg_4]
0x71D440: test    ecx, ecx
0x71D442: mov     eax, [esp+23Ch+var_208]
0x71D446: jbe     short loc_71D47B
0x71D448: mov     esi, [esp+23Ch+arg_0]
0x71D44F: mov     edi, ecx
0x71D451: mov     ecx, [esp+23Ch+arg_18]
0x71D458: test    esi, esi
0x71D45A: jbe     short loc_71D476
0x71D45C: mov     edx, esi
0x71D45E: mov     edi, edi
0x71D460: movzx   ebx, byte ptr [ecx]
0x71D463: mov     bx, [esp+ebx*2+23Ch+var_204]
0x71D468: mov     [eax], bx
0x71D46B: add     eax, 2
0x71D46E: add     ecx, 1
0x71D471: sub     edx, 1
0x71D474: jnz     short loc_71D460
0x71D476: sub     edi, 1
0x71D479: jnz     short loc_71D458
0x71D47B: mov     ecx, [esp+23Ch+var_4]
0x71D482: pop     edi
0x71D483: pop     esi
0x71D484: pop     ebp
0x71D485: pop     ebx
0x71D486: xor     ecx, esp
0x71D488: call    @__security_check_cookie@4; __security_check_cookie(x)
0x71D48D: add     esp, 22Ch
0x71D493: retn
