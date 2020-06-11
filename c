using System;
        }

        private void BtnAutoSync_Click(object sender, EventArgs e)
        {
            if (btnAutoSync.Text == "Automatic Sync Start" && btnPowerOff.Enabled == true)
            {
                btnPullData.Enabled = false;
                btnGetDeviceTime.Enabled = false;
                btnBeep.Enabled = false;
                btnEnableDevice.Enabled = false;
                btnDisableDevice.Enabled = false;
                btnRestartDevice.Enabled = false;
                btnPowerOff.Enabled = false;
                btnGetAllUserID.Enabled = false;
                btnUploadUserInfo.Enabled = false;
                btnDownloadFingerPrint.Enabled = false;
                btnAutoSync.Text = "Automatic Sync Stop";
                myTimer.Start();
                btnAutoSync.BackColor = Color.Red;
            }
            else
            {
                btnPullData.Enabled = true;
                btnGetDeviceTime.Enabled = true;
                btnBeep.Enabled = true;
                btnEnableDevice.Enabled = true;
                btnDisableDevice.Enabled = true;
                btnRestartDevice.Enabled = true;
                btnPowerOff.Enabled = true;
                btnGetAllUserID.Enabled = true;
                btnUploadUserInfo.Enabled = true;
                btnDownloadFingerPrint.Enabled = true;
                btnAutoSync.Text = "Automatic Sync Start";
                myTimer.Stop();
                btnAutoSync.BackColor = Color.Green;
            }
        }
    }
}
