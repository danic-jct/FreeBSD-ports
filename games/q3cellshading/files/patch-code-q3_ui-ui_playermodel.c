--- ./code/q3_ui/ui_playermodel.c.orig	Wed May 31 18:55:11 2006
+++ ./code/q3_ui/ui_playermodel.c	Wed May 31 19:07:38 2006
@@ -424,7 +424,7 @@
 		{
 			filelen = strlen(fileptr);
 
-			COM_StripExtension(fileptr,skinname);
+			COM_StripExtension(fileptr, skinname, sizeof(skinname));
 
 			// look for icon_????
 			if (!Q_stricmpn(skinname,"icon_",5))
