0x4EF290: mov     eax, ecx; Verified: load-time SubSpace index builder reads only this WorldSpace's persistentCell (+0x34), not regular exterior cells. Persistent-cell SubSpace refs are represented in two distinct indexes: +0x64 is populated by TESWorldSpace_IndexReference for later cell reattachment; +0x60 is populated here for spatial bounds lookup.
0x4EF292: mov     ecx, [eax+34h]; persistentCell
0x4EF295: test    ecx, ecx
0x4EF297: jz      short locret_4EF29F
0x4EF299: push    eax; worldspace
0x4EF29A: call    TESObjectCELL_IndexSubSpaceReferences; Verified: scans only the supplied persistent cell's object list under the cell list lock, filters base-form type kFormType_SubSpace (0x29), and inserts each candidate into the owning WorldSpace index. Sole direct caller is TESWorldSpace_IndexPersistentCellSubSpaces.
0x4EF29F: retn
