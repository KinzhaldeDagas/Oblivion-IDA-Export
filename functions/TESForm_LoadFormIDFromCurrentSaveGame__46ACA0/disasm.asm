0x46ACA0: mov     ecx, ds:0B33B00h; MEF v29 actor-pair helper prerequisite: TESForm_LoadFormIDFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadFormID.
0x46ACA6: jmp     SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
